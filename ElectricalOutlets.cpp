#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>

 
void run() {
	int n;
	std::cin >> n;
	while (n--) {
		int k;
		std::cin >> k;
		int sum = 0;
		int input;
		for (int i = 0; i < k; i++) {
			std::cin >> input;
			sum+= input;
		}
		std::cout << sum + 1 -k << std::endl;
	}
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
