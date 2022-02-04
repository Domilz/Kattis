#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <sstream>
#include <cmath> 

void run() {
	std::string s, hex;
	std::cin >> s;
	long long base10 = 0;
	for (int i = 0; i < s.length(); i++) {
		base10 += (((int) s[s.length()-1-i]) - '0') * std::pow(8, i);
	}
	

	std::stringstream ss;
	ss << std::hex << base10;
	std::string res = ( ss.str() );
	for (auto &c : res) c = std::toupper(c);
	std::cout << res;
	
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
