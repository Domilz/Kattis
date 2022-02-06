#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>

 
void run() {
	int p;
	int k, n;
	std::cin >> p;
	while (p--) {
		std::cin >> k >> n;
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += i;
		}
		std::cout << k << " " << sum+n << std::endl ;
	}
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
