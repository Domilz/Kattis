#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <sstream>
#include <cmath> 
#include <set>

void run() {
	std::string s;
	std::cin >> s;
	if (s.find("ss") != std::string::npos) {
		std::cout << "hiss";
	}
	else {
		std::cout << "no hiss";
	}
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	run();
}
