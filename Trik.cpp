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
	int current = 1;
	for (int i = 0; i < s.length(); i++) {
		if (current == 1 && s[i] == 'A')
			current = 2;
		else if (current == 1 && s[i] == 'C')
			current = 3;
		else if (current == 2 && s[i] == 'B')
			current = 3;
		else if (current == 2 && s[i] == 'A')
			current = 1;
		else if (current == 3 && s[i] == 'B')
			current = 2;
		else if (current == 3 && s[i] == 'C')
			current = 1;
	}
	std::cout << current << std::endl;
}

 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
