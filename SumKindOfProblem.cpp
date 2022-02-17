#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>
#include <unordered_map>
#include <set>
 
void run() {
    int p;
    std::cin >> p;
    while (p--) {
        int k, n;
        int sum = 0, odd = 0, even = 0;
        std::cin >> k >> n;
        int oddInt = 1, evenInt = 2;
        while (n--) {
            sum += n+1;
            odd += oddInt;
            oddInt += 2;
            even += evenInt;
            evenInt += 2;
        }
        std::cout << k << " " << sum << " " << odd << " " << even << std::endl;
    }
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
