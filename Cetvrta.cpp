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
	int x, y;
	std::map<int, int> mx, my;
	for (int i = 0; i < 3; i++) {
		std::cin >> x >> y;
		if (mx.count(x)) {
			mx[x]++;
		}
		else {
			mx[x] = 1;
		}
		if (my.count(y)) {
			my[y]++;
		}
		else {
			my[y] = 1;
		}
	}
	for (auto &ele : mx) {
		if (ele.second == 1)
			std::cout << ele.first << " ";
	}
	for (auto &ele : my)
		if (ele.second == 1)
			std::cout << ele.first << std::endl;
	
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
