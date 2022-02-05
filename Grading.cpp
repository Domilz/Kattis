#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>

 
void run() {
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;
	int g;
	std::cin >> g;
	if (g >= a) std::cout << "A";
	else if (g >= b) std::cout << "B";
	else if (g >= c) std::cout << "C";
	else if (g >= d) std::cout << "D";
	else if (g >= e) std::cout << "E";
	else std::cout << "F";
	
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
