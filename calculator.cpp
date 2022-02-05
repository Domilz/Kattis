#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <sstream>
#include <cmath> 
#include <set>
#include <iomanip>


void findEndingParentheses(int index, std::string &line, std::vector<std::pair<int, int>> &parentheses, int operatorsSize) {
    int j = index + 1;
    int endingOperator = operatorsSize;
    int wait = 0;
    while (1) {
        if (line[j] == ')') {
            if (wait == 0) {
                break;              
            }
            else {
                wait--;
            }
        }
        if (line[j] == '*' || line[j] == '/' || line[j] == '+' || line[j] == '-') {
            endingOperator++;
        }
        if (line[j] == '(') {
            wait++;
        }
        j++;
    }
    parentheses.push_back({operatorsSize+1, endingOperator+1});
}

void calculate(int startIndex, int stopIndex, std::vector<char> &operators, std::vector<double> &elements) {

    for (int i = startIndex; i < stopIndex; i++) {
        if (operators[i] == '*') {
            elements[i] = elements[i] * elements[i+1];
            elements.erase(elements.begin() + i + 1);
            operators.erase(operators.begin() + i);
            i--;
            stopIndex--;
        }
        else if (operators[i] == '/') {
            elements[i] = elements[i] / elements[i+1];
            elements.erase(elements.begin() + i + 1);
            operators.erase(operators.begin() + i);
            i--;
            stopIndex--;
        }

    }
    for (int i = startIndex; i < stopIndex; i++) {
        if (operators[i] == '+') {
            elements[i] = elements[i] + elements[i+1];
            elements.erase(elements.begin() + i + 1);
            operators.erase(operators.begin() + i);
            i--;
            stopIndex--;
        }
        else if (operators[i] == '-') {
            elements[i] = elements[i] - elements[i+1];
            elements.erase(elements.begin() + i + 1);
            operators.erase(operators.begin() + i);
            i--;
            stopIndex--;
        }
    }
}



void run() {
    std::string line;
    while(std::getline(std::cin, line))
    {
        std::vector<char> operators;
        std::vector<std::pair<int, int>> parentheses;
        
        std::vector<double> elements;
        int index = 0;
        bool flag = false;
        if (line[0] == '-') {
            index = 1;
            flag = true;
        }
        char prev;
        for (int i = index; i < (int) line.length(); i++) {
            if (line[i] != ' ' && line[i] != ')') {
                std::string element = "";
                if (line[i] == '*' || line[i] == '/' || line[i] == '+') {
					prev = line[i];
                    operators.push_back(line[i]);
                }
                else if (line[i] == '-') {
                    if (prev == '+' || prev == '*' || prev == '/' || prev == '-') {
                        flag = true;
                    }
                    else {
                        operators.push_back(line[i]);
                    }
                }
                else if (line[i] == '(') {
                    findEndingParentheses(i, line, parentheses, (int) operators.size()-1);
                }
                else {
					prev = 'n';
                    while (line[i] >= '0' && line[i] <= '9') {
                        element += line[i];
                        i++;
                    }
                    i--;
                    double elementToPush = std::stod(element);
                    if (flag) {
                        flag = false;
                        elementToPush = -elementToPush;
                    }
                    elements.push_back(elementToPush);                  
                }
            }
        }
        std::sort(parentheses.begin(), parentheses.end(), [](auto &left, auto &right) {
            return left.second-left.first < right.second-right.first;
        });
        
        
        for (auto &currentP : parentheses) {
            calculate(currentP.first, currentP.second, operators, elements);
            for (auto &checkP: parentheses) {
                if (checkP != currentP) {
                    if (checkP.first > currentP.first) {
                        checkP.first -= (currentP.second - currentP.first);
                        checkP.second -= (currentP.second - currentP.first);
                    }
                    else if (checkP.second > currentP.first) {
                        checkP.second = checkP.second - (currentP.second - currentP.first);
                    }                   
                }
            }
        }
        
        calculate(0, operators.size(), operators, elements);
        
        for (auto &ele : elements) {
            std::cout << std::fixed << std::setprecision(2) << ele << std::endl;
        }
    }
}
 
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    run();
}

