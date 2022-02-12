#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>
#include <unordered_map>
 
void run() {
    int strength = 0;
    std::unordered_map<char, int> map;
    for (int i = 0; i < 5; i++) {
        std::string s;
        std::cin >> s;
        if (map.count(s[0])) {
            map[s[0]]++;
        }
        else {
            map[s[0]] = 1;
        }
    }
    int max = 0;
    for (auto &ele : map) {
        if (ele.second > max) {
            max = ele.second;
        }
    }
    std::cout << max << std::endl;
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
