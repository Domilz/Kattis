#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <sstream>
#include <cmath> 
#include <set>

void run() {
	int n;
	std::cin >> n;
	int r, e, c;
	while (n--) {
		std::cin >> r >> e >> c;
		if (e - c > r) {
			std::cout << "advertise\n";
		}
		else if(e-c < r) {
			std::cout << "do not advertise\n";
		}
		else {
			std::cout << "does not matter\n";
		}
	}
		
	
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	run();
}
