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
	int output = 2;
	while (n--) {
		output *= 2;
		output--;
	}
	std::cout << output * output;
	
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	run();
}
