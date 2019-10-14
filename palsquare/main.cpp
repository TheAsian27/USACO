/*
ID : aaron.l3
PROB : palsquare
LANG : C++14
*/

//#include <fstream>
#include <vector>
#include <iostream>
#include <string>
#include <array>
#include <fstream>

using std::string;
using std::cout;
using std::ifstream;
using std::ofstream;

std::array<char, 20> correspondingNums = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };

inline string convert(int num, const int base) {
	string yeet = "";
	while (num > 0) {
		yeet += correspondingNums[num % base];
		num /= base;
	}
	std::reverse(yeet.begin(), yeet.end());
	return yeet;
}

bool isPal(string s) {
	string s2 = s;
	std::reverse(s2.begin(), s2.end());
	return s == s2;
}

int main() {
	int base;
	ifstream input("palsquare.in");
	input >> base;
	input.close();
	ofstream output("palsquare.out");
	for (int i =1; i <= 300; i++) {
		if(isPal(convert (base,i*i))){
			output << convert(i) << " " << convert(i*i) << endl;
		}
	}
	output.close()
	return 0;
}
