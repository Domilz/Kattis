#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
 
void run() {
	int n, w, h;
	std::cin >> n >> w >> h;
	int hypo = sqrt(w*w + h* h);
	int input;
	for (int i = 0; i < n; i++) {
		std::cin >> input;
		if (input <= hypo) {
			std::cout << "da\n";
		}
		else {
			std::cout << "ne\n";
		}
	}
	
 
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
