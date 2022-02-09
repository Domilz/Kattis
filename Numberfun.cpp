#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <unordered_map>
 
void run() {
    int n;
    std::cin >> n;
    while (n--) {
        double a, b, c;
        std::cin >> a >> b >> c;
        if (a+b == c) {
            std::cout << "Possible\n";
        }
        else if (a-b == c) {
            std::cout << "Possible\n";
        }
        else if (b-a == c) {
            std::cout << "Possible\n";
        }
        else if (a*b == c) {
            std::cout << "Possible\n";
        }
        else if (a/b == c) {
            std::cout << "Possible\n";
        }
        else if (b/a == c) {
            std::cout << "Possible\n";
        }
        else {
            std::cout << "Impossible\n";
        }
    }
}

 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
