#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>
#include <unordered_map>
#include <set>
  
void run() {
    std::string s;
    int hej = 1;
    while (std::cin >> s) {
        if (s == "END") return;
        int count = 0;
        int pattern;
        bool flag = 1;
        if (s.length() == 1) std::cout << hej << " EVEN\n";
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == '*') {
                if (!flag) {
                    if (count != pattern) {
                        std::cout << hej << " NOT EVEN\n";
                        break;
                    }
                    else {
                        count = 0;
                    }
                }
                else {
                    pattern = count;
                    count = 0;
                    flag = 0;
                }
                if (i == s.length() - 1) std::cout << hej << " EVEN\n";

            }
            else {
                count++;
            }
        }
        hej++;
    }
}
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
