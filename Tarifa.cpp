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
	int x;
	std::cin >> x;
	int n;
	std::cin >> n;
	int input;
	int sum = x;
	for (int i = 0; i < n; i++) {
		std::cin >> input;
		sum += x - input;
	}
	std::cout << sum;
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	run();
}
