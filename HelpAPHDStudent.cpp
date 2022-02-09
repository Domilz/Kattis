#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <unordered_map>
 
void run() {
    int n;
    std::cin >> n;
    std::string s;
    while (n--) {
        std::cin >> s;
        if (s[0] != 'P') {
            std::string a = "", b = "";
            int i = 0;
            while (s[i] != '+') {
                a += s[i];
                i++;
            }
            for (i = i + 1; i < s.length(); i++) {
                b += s[i];
            }
            std::cout << std::stoi(a) + std::stoi(b) << std::endl;
        }
        else {
            std::cout << "skipped\n";
        }
    }
}

 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
