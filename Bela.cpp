#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <unordered_map>
 
void run() {
    std::unordered_map<char, int> dominant, nonDominant;
    dominant['A'] = 11;
    dominant['K'] = 4;
    dominant['Q'] = 3;
    dominant['J'] = 20;
    dominant['T'] = 10;
    dominant['9'] = 14;
    dominant['8'] = 0;
    dominant['7'] = 0;

    nonDominant['A'] = 11;
    nonDominant['K'] = 4;
    nonDominant['Q'] = 3;
    nonDominant['J'] = 2;
    nonDominant['T'] = 10;
    nonDominant['9'] = 0    ;
    nonDominant['8'] = 0;
    nonDominant['7'] = 0;

    int sum = 0;
    std::string input;
    int n;
    char s;
    std::cin >> n >> s;

    for (int i = 0; i < 4*n; i++) {
        std::cin >> input;
        if (input[1] == s)
            sum += dominant[input[0]];
        else 
            sum += nonDominant[input[0]];
    }
    std::cout << sum;
}

 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
