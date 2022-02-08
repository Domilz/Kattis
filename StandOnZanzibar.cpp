#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
 
void run() {
	int t;
    std::cin >> t;
    while (t--) {
        int last;
        int total = 0;
        std::cin >> last;
        int input;
        while (std::cin >> input) {
            if (input == 0) break;
            if (input > last*2) {
                total += input - last*2;
            }
            last = input;
        }
        std::cout << total << std::endl;
    }
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
