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
	std::set<std::string> trips;
	std::cin >> n;
	std::string input;
	for (int i = 0; i < n; i++) {
		std::cin >> input;
		trips.insert(input);
	}
	std::cout << trips.size() << "\n";
	
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t;
	std::cin >> t;
	while(t--)
		run();
}
