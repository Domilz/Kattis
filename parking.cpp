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
	int t;
    std::cin >> t;
    while (t--) {
        int min = 100, max = 0;
        int stores;
        std::cin >> stores;
        for (int j = 0; j < stores; j++) {
            int input;
            std::cin >> input;
            if (input > max) {
                max = input;
            }
            if (input < min) {
                min = input;
            }
        }
        double sum = (max-min)/2 + max-min  + max - min - (max-min)/2;
        std::cout << sum << std::endl;
        
    }
	
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
