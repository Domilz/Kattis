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
	int input, n;
	std::cin >> n;
	double bats = n;
	double sum = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> input;
		if (input != -1) {
			sum += input;
		}
		else {
			bats--;
		}
	}
	std::cout << sum/bats << std::endl;
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
