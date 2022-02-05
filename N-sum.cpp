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
	int sum = 0;
	while (n--) {
		int input;
		std::cin >> input;
		sum += input;
	}
	std::cout << sum;
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	run();
}
