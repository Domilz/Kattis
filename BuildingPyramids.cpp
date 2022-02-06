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
	int n;
	std::cin >> n;
	int height = 0;
	int blocks = 0;
	int sqrt = 1;
	while (blocks <= n) {
		blocks += sqrt * sqrt;
		height++;
		sqrt += 2;
	}
	std::cout << height - 1 << std::endl;
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}

