#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>

int sum(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n%10;
		n /= 10;
	}
	return sum;
}

 
void run() {
	int n;
	std::cin >> n;
	while ((n % sum(n)) != 0) {
		n++;
	}
	std::cout << n;
	
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
