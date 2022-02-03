#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
 
void run() {
	int n, input;
	int negatives = 0;
	std::cin >> n;
	while (n--) {
		std::cin >> input;
		if (input < 0) {
			negatives++;
		}
	}
	std::cout << negatives;
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
