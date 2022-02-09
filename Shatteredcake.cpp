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
    int totalW;
    std::cin >> totalW;
    int n;
    std::cin >> n;
    int a = 0;
    int w, h;
    for(int i = 0; i < n; i++) {
        std::cin >> w >> h;
        a += w*h;
    }

    std::cout << a / totalW << std::endl;

}

 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
