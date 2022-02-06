#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
 
void run() {
	int l, d, x;
	std::cin >> l >> d >> x;
	auto digitsSum = [](int n) {
		int sum = 0;
		while (n > 0) {
			sum += n % 10;
			n /= 10;
		}
		return sum;
	};
	
	for (int i = l; i <= d; i++) {
		if (digitsSum(i) == x) {
			std::cout << i << "\n";
			break;
		}
	}
	
	for (int i = d; i >= l; i--) {
		if (digitsSum(i) == x) {
			std::cout << i << "\n";
			break;
		}
	}
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
