#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <unordered_map>
#include <utility>
 
void run() {
    int indexLetters[16];
    char letters[16];
    char c = 'A';
    std::unordered_map<char, std::pair<int, int>> map;
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            map[c] = {i, j};
            c++;
        }
    }
    char input;
    int sum = 0;
    std::pair<int, int> ele;

    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            std::cin >> input;
            if (input != '.') {
                ele = map[input];
                sum += abs(ele.first - i) + abs(ele.second - j);
            }
        }
    }
    std::cout << sum << std::endl;
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
