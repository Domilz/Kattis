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
	double n, k, input;
	std::cin >> n >> k;
	double sum = 0;
	for (int i = 0; i < k; i++) {
		std::cin >> input;
		sum += input;
	}
	double max = sum, min = sum;
	for (int i = k; i < n; i++) {
		max += 3;
		min -= 3;
	}
	std::cout << min/n << " " << max/n << "\n";
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	run();
}
