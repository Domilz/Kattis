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
	int s, t, n;
	std::cin >> s >> t >> n;
	int a, b, c;
	for (int j = 0; j < n+1; j++) {
		std::cin >> a;
	}
	s += a;
	for (int j = 0; j < n; j++) {
		std::cin >> a;
	}
	s += a;
	for (int j = 0; j < n; j++) {
		std::cin >> a;
	}
	s += a;
	if (s <= t) std::cout << "yes";
	else std::cout << "no";
	
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
