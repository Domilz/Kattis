#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>
#include <sstream>
#include <cmath> 
#include <unordered_map>

void run() {
	std::unordered_map<char, std::string> base8 = {
		{'0', "000"},
		{'1', "001"},
		{'2', "010"},
		{'3', "011"},
		{'4', "100"},
		{'5', "101"},
		{'6', "110"},
		{'7', "111"}
	};
	std::unordered_map<std::string, char> base16 = {
		{"0000", '0'},
		{"0001", '1'},
		{"0010", '2'},
		{"0011", '3'},
		{"0100", '4'},
		{"0101", '5'},
		{"0110", '6'},
		{"0111", '7'},
		{"1000", '8'},
		{"1001", '9'},
		{"1010", 'A'},
		{"1011", 'B'},
		{"1100", 'C'},
		{"1101", 'D'},
		{"1110", 'E'},
		{"1111", 'F'}
	};

	std::string s;
	std::cin >> s;
	std::string b8 = "";
	std::string output = "";
	for (int i = s.length()-1; i >= 0; i--) {
		b8 = base8[s[i]] + b8;
		if (b8.length() > 4) {
			output = base16[b8.substr(b8.length()-4)] + output;
			if (b8.length() > 4) 
				b8 = b8.substr(0, b8.length()-4);
			else
				b8 = "";
		}
		if (i == 0) {
			for (int i = b8.length(); i < 4; i++) {
				b8 = '0' + b8;
			}
			output = base16[b8] + output;
		}
	}
	int index = 0;
	while (output[index] == '0') {
		index++;
	}
	output = output.substr(index);
	if (output == "") 
		output = '0';
	std::cout << output;
}
 
 
int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	run();
}
