#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <iomanip>

 
void run() {
	
    int g, m;
    std::cin >> g;
    int r = g;
    int gob[100001][2];
    for (int i = 0; i < g; i++) {
        std::cin >> gob[i][0] >> gob[i][1];
    }
    std::cin >> m;
    int spr[100001][3];
    for (int i = 0; i < m; i++) {
        std::cin >> spr[i][0] >> spr[i][1] >> spr[i][2];
    }
    int x, y;
    for (int i = 0; i < g; i++) {
        for (int j = 0; j < m; j++) {
            x = (gob[i][0] - spr[j][0]) * (gob[i][0] - spr[j][0]);
            y = (gob[i][1] - spr[j][1]) * (gob[i][1] - spr[j][1]);
            if (x+y <= spr[j][2]*spr[j][2]) {
                r--;
                break;
            }
        }
    } 
    std::cout << r << std::endl;

    
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
