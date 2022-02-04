#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
 
void run() {
	double n;
	while(std::cin >> n) {
		int turns = 0;
		bool turn = false;
		while (n > 1) {
			if (turn) {
				n /= 2;
				turn = false;
			}
			else {
				n = ceil(n/9);
				turn = true;
			}
			turns++;
		}
		if (turns % 2) {
			std::cout << "Stan wins.\n";
		}
		else {
			std::cout << "Ollie wins.\n";
		}
		
	}
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
