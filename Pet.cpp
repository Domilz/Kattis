#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
 
void run() {
	int sum = 0;
	int max = 0;
	int index;
	int input;
	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 4; j++) {
			std::cin >> input;
			sum += input;
		}
		if (max < sum) {
			max = sum;
			index = i + 1;
		}
	}
	std::cout << index << " " << max;
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
