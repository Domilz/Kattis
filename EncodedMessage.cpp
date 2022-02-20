#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>
#include <map>

 
void run() {
	int t;
    std::cin >> t;
    std::string s;
    while (t--) {
        int n = 0;
        std::vector<std::vector<char>> v;
        std::cin >> s;
        std::string newS = "";
        for (int i = 0; i < sqrt(s.length()); i++) {
            std::vector<char> tempV;
            for (int j = 0; j < sqrt(s.length()); j++) {
                tempV.push_back(s[n]);
                n++;
            }
            v.push_back(tempV);
        }
        for (int i = sqrt(s.length()) - 1; i >= 0; i--) {
            for (int j = 0; j < sqrt(s.length()); j++) {
                newS += v[j][i];
            }
        }
        std::cout << newS << std::endl;
    }
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
