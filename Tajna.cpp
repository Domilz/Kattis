#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <cmath>
#include <unordered_map>
#include <utility>
 
void run() {
    std::string s;
    std::cin >> s;

    int size = s.size();
    int rows = sqrt(size);

    while(size % rows != 0) {
        rows--;
    }

    int cols = size / rows;
    char a[100][100];
    int index = 0;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            a[j][i] = s[index];
            index++;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << a[i][j];
        }
    }

}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
