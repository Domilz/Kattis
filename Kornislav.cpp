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
	int a, b, c, d;
    std::vector<int> v;
    int input;
    for (int i = 0; i < 4; i++) {
        std::cin >> input;
        v.push_back(input);
    }
    std::sort(v.begin(), v.end());
    std::cout << v[0] * v[2];
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
