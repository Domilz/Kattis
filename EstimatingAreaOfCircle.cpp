#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
 
void run() {
    while (1) {
	    double r, m, c;
        std::cin >> r >> m >> c;
        if (r == 0 && m == 0 && c == 0) {
            break;
        }
        std::cout << M_PI * r*r << " ";
        std::cout << (r+r)*(r+r) * (c/m) << std::endl;
    }
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
