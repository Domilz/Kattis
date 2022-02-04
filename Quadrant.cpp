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
	int x, y;
	std::cin >> x >> y;
	if (x > 0 && y > 0) {
		std::cout << 1;
	}
	else if (x > 0 && y < 0) {
		std::cout << 4;
	}
	else if(x < 0 && y > 0) {
		std::cout << 2;
	}
	else {
		std::cout << 3;
	}
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	run();
}
