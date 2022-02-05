#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>
 
void run() {
	long long a;
	std::cin >> a;
	std::cout << std::fixed << std::setprecision(10) << std::sqrt(a) * 4;
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
