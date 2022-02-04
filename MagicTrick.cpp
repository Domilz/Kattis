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
	std::set<char> cards;
	for (auto &c : s)
		cards.insert(c);
	if (s.length() > cards.size()) {
		std::cout << "0\n";
	}
	else {
		std::cout << "1\n";
	}
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	run();
}
