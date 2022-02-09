#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
 
void run() {
    int n;
    std::cin >> n;
    bool on = false;
    int sum = 0;
    int input, prev;
    for (int i = 0; i< n; i++) {
        std::cin >> input;
        if (on) {
            sum += input - prev;
        }
        prev = input;
        on = !on;
    }
    if (on) std::cout << "still running";
    else std::cout << sum;
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
