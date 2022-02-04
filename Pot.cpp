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
	int n;
	std::cin >> n;
	int p;
	int x = 0;
	int power;
	for (int i = 0; i < n; i++) {
		std::cin >> p;
		power = p % 10;
		p /= 10;
		x += std::pow(p, power);
	}
	std::cout << x << std::endl;
	
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	run();
}
