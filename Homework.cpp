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
	std::string s;
	std::cin >> s;
	std::vector<std::string> problems;
	int problem = 0;
	size_t lastpos = 0;
	size_t pos = 0;
	while ((pos = s.find(';')) != std::string::npos) {
        problems.push_back(s.substr(lastpos, pos));
        s.erase(0, pos + 1);
    }
    problems.push_back(s);
    for (auto &ele : problems) {
		std::vector<std::string> specProb;
		if (ele.find('-') != std::string::npos) {
			pos = ele.find('-');
			specProb.push_back(ele.substr(lastpos, pos));
			ele.erase(0, pos + 1);
			specProb.push_back(ele);
			problem += std::stoi(specProb[1]) - std::stoi(specProb[0]);
		}
		problem++;
	}
	std::cout << problem << "\n";
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
