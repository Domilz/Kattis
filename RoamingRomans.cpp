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
    double sum = std::round((x * 5280 / 4854) * 1000);
    std::cout << sum;
}

 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
