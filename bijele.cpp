#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
 
void run() {
	int k, q, r, b, kn, p;
	std::cin >> k >> q >> r >> b >> kn >> p;
	std::cout << (1 - k) << " " << (1 - q) << " " << (2 - r) << " " << (2 - b) << " " << (2 - kn) << " " << (8 - p);
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
