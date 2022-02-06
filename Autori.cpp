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
	std::string s;
	std::cin >> s;
	std::string output;
	output = s[0];
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == '-') {
			output += s[i+1];
		}
	}
	std::cout << output << std::endl;
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
