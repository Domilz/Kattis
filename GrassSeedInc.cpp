#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>

 
void run() {
	double c;
	std::cin >> c;
	double k;
	std::cin >> k;
	double w, l;
	double sum = 0;
	for (int i = 0; i < k; i++) {
		std::cin >> w >> l;
		sum += w*l*c;
	}
	std::cout << std::fixed << std::setprecision(6) << sum;
	
	
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
