#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>

 
void run() {
	int n;
	std::cin >> n;
	double b, p;
	while (n--) {
        std::cin >> b >> p;

        double ans = 60.0 * (b / p);
        double var = 60.0 / p;

        std::cout << std::fixed << std::setprecision(4);
        std::cout << ans - var << " " << ans << " " << ans + var << "\n";
	}
	
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
