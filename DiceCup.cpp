#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>

 
void run() {
	int n, m;
	std::cin >> n >> m;
	int d;
	d = abs(n-m) + 1;
	for (int i = 1; i <= d; i++) {
		std::cout << std::min(n, m) + i << std::endl;
	}
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
