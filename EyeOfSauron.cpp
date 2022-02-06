#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>

 
void run() {
	std::string n;
	std::cin >> n;
	int count = 0;
	bool flag = false;
	for (int i = 0; i < n.length(); i++) {
		if (n[i] != '|') {
			flag = true;
		}
		else if (!flag) {
			count--;
		}
		else if (flag) {
			count++;
		}
	}
	if (count == 0) {
		std::cout << "correct\n";
	}
	else {
		std::cout << "fix\n";
	}
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
