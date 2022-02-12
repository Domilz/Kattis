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
    int x1, y1, x2, y2, x3, y3;
    std::string type;
    for (int i = 1; i <= n; i++) {
        std::cout << "Case #" << i << ": ";
        std::vector<int> distances;
        std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        int l1 = (x1 - x2)*(x1 - x2) + (y1 - y2) * (y1-y2);
        int l2 = (x1 - x3)*(x1 - x3) + (y1 - y3) * (y1-y3);
        int l3 = (x2 - x3)*(x2 - x3) + (y2 - y3) * (y2-y3);
        int collinear = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
        if (!collinear) {std::cout <<  "not a triangle\n";;}
        else {
            distances.push_back(l1);
            distances.push_back(l2);
            distances.push_back(l3);
            std::sort(distances.begin(), distances.end());
            if (distances[0] == distances[1] || distances[1] == distances[2]) std::cout << "isosceles ";
            else std::cout << "scalene ";

            if (distances[0] + distances[1] == distances[2]) std::cout << "right ";
            else if (distances[0] + distances[1] > distances[2]) std::cout << "acute ";
            else std::cout << "obtuse ";
            std::cout << "triangle\n";
        }

    }
    

}

 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
