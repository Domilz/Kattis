#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
 
void run() {
	int n, input;
	std::cin >> n;
	std::string s;
	while (n--) {
		std::cin >> input;
		s = input % 2 ? " is odd\n" : " is even\n";
		std::cout << input << s;
	}
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
