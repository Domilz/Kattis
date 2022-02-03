#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
 
void run() {
	int input;
	std::cin >> input;
	if (input % 2) {
		std::cout << "Alice";
	}
	else {
		std::cout << "Bob";
	}
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
