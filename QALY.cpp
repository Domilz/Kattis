#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
 
void run() {
	int N;
	std::cin >> N;
	double q, y;
	double sum = 0;
	for (int i = 0; i < N; i++) {
		std::cin >> q >> y;
		sum += q*y;
	}
	std::cout << sum;
 
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
