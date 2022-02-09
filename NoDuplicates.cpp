#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <unordered_map>
#include <unordered_set>
 
void run() {
    std::string s;
    std::string word = "";
    std::unordered_set<std::string> unique;
    std::vector<std::string> total;
    while (std::cin >> s) {
        unique.insert(s);
        total.push_back(s);
        if (unique.size() < total.size()) {
            std::cout << "no\n";
            return;
        }
    }
    std::cout << "yes\n";
}

 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
