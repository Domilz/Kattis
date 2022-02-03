#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>

 
void run() {
	int ds;
	int n, m;
	std::cin >> ds;
	int input;
	while (ds--) {
		int max = 0;
		std::cin >> n >> m;
		std::vector<int> v;
		std::vector<int> index;
		for(int i = 0; i < n; i++) {
            std::cin >> input;
            v.push_back(input);
            if (input == m) {
                index.push_back(i);
            }
        }
        for(int i : index) {
            int current = m;
            for (int j = i-1; j >= 0; j--) {
                if(v[j] <= m) {
                    break;
                }
                current += v[j];
            }
            for (int j = i+1; j < n; j++) {
                if(v[j] <= m) {
                    break;
                }
                current += v[j];
            }
            max = std::max(max, current);
        }
        std::cout << max << "\n";
	}
	
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
