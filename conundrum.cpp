#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
 
void run() {
	std::string s;
    std::cin >> s;
    int days = 0;
    for (int i = 0; i < s.length(); i+=3) {
        if (s[i] != 'P') days++;
        if (s[i+1] != 'E') days++;
        if (s[i+2] != 'R') days++;
    }
    std::cout << days << std::endl;
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
