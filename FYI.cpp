#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>

 
void run() {
	std::string s;
	std::cin >> s;
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '5') {
			count++;
		}
		else {
			break;
		}
	}
	if (count < 3) {
		std::cout << 0;
	}
	else {
		std::cout << 1;
	}
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
