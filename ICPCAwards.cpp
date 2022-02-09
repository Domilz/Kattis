#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <map>
#include <unordered_set>
#include <utility>
#include <set>
 
void run() {
    int n;
	std::cin >> n;
	std::vector<std::pair<std::string, std::string>> outputWinners;
    std::set<std::string> winners;
	int winnersCount = 12;
	std::string school, team;
	for (int i = 0; i < n; i++) {
		std::cin >> school >> team;
		if (winnersCount) {
			if (winners.count(school) == 0) {
				winners.insert(school);
				winnersCount -= 1;
				outputWinners.push_back(std::make_pair(school, team));
			}
		}
	}
	for (auto &ele : outputWinners) std::cout << ele.first << " " << ele.second << std::endl;
}

 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
