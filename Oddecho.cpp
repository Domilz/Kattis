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
	int n;
	std::cin >> n;
	std::string s;
	for (int i = 1; i <= n; i++) {
		std::cin >> s;
		if (i%2) {
			std::cout << s << std::endl;
		}
	}
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
