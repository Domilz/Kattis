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
	unsigned int n;
    std::cin >> n;
    unsigned int copy = n;
    unsigned int sum = 0;

    while (copy > 0) {
        if (copy & 1) {
            sum = sum << 1;
            sum += 1;
        }
        else {
            sum = sum << 1;
        }
        copy = copy >> 1;

    }
    std::cout << sum;
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
