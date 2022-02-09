#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
 
void run() {
    double x;
    std::cin >> x;
    int output = (x * 5280 / 4854 * 1000) + 0.5;
    std::cout << output;
}

 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
