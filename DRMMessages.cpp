#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <unordered_map>
 
void run() {
    std::string s;
    std::cin >> s;
    std::string s1, s2;
    s1 = s.substr(0, s.length()/2);
    s2 = s.substr(s.length()/2);
    int rotate1 = 0;
    for (auto &c : s1) rotate1 += c - 'A';
    int rotate2 = 0;
    for (auto &c : s2) rotate2 += c - 'A';
    for (auto &c : s1) c = ((c+rotate1 - 'A') % ('Z' - 'A' + 1)) + 'A';
    for (auto &c : s2) c = ((c+rotate2  - 'A') % ('Z' - 'A' + 1)) + 'A';
    char c;
    std::string output = "";
    for (int i = 0; i < s1.length(); i++) {
        c = ((s1[i] - 'A' + s2[i] - 'A') % ('Z' - 'A' + 1)) + 'A';
        output += c;
    }

    std::cout << output << std::endl;
}

 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
