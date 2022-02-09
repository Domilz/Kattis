#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <unordered_map>
 
void run() {
    int l, r;
    std::cin >> l >> r;
    if (l == 0 && r == 0) {
        std::cout << "Not a moose\n";
    }
    else if (l == r) {
        std::cout << "Even " << l+r << std::endl; 
    }
    else {
        std::cout << "Odd " << std::max(l, r)*2 << std::endl;
    }
}

 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
