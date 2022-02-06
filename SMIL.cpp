#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
 
void run() {
	std::string s;
	std::cin >> s;
	for (int i = 0; i < (int) s.length(); i++) {
		if (s[i] == ':') {
			if (i+1 < (int) s.length()) {
				if (s[i+1] == ')') {
					std::cout << i << std::endl;
				}
				else if (s[i+1] == '-') {
					if (i+2 < (int) s.length()) {
						if (s[i+2] == ')')
							std::cout << i << std::endl;
					}
				}
			}
		}
		if (s[i] == ';') {
			if (i+1 < (int) s.length()) {
				if (s[i+1] == ')') {
					std::cout << i << std::endl;
				}
				else if (s[i+1] == '-') {
					if (i+2 < (int) s.length()) {
						if (s[i+2] == ')')
							std::cout << i << std::endl;
					}
				}
			}
		}
	}
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
