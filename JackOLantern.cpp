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
	std::string m, d;
	std::cin >> m >> d;	
	if (m + " " + d == "OCT 31" || m + " " + d == "DEC 25") {
		std::cout << "yup";
	}
	else {
		std::cout << "nope";
	}
	
	
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	run();
}
