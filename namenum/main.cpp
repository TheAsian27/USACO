/*
ID : aaron.l3
PROB : namenum
LANG : C++14
*/

#define victor vector
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct nut {
	char a, b, c;
	nut(char _a, char _b, char _c): a(_a), b(_b), c(_c) {}
};

char yeet(int x) {
	switch (x) {
		case 2:
			nut letters('A', 'B', 'C');
			break;
		case 5 : 
			nut letters('J', 'K', 'L');
			break; 
		case 8 : 
			nut letters('T', 'U', 'V');
			break;
		case 3 :
			nut letters('D', 'E', 'F');
			break;
		case 6 : 
			nut letters('M', 'N', 'O');
			break;
		case 9 : 
			nut letters('W', 'X', 'Y');
			break;
		case 4 : 
			nut letters('G', 'H', 'I');
			break; 
		case 7 :
			nut letters('P', 'R', 'S');
			break;
		default:
	}
}

int main() {
	string s;
	string num = "";
	ifstream nameList("dict.txt");
	victor<string> names;
	while (!nameList.eof()) {
		nameList >> s;
		names.push_back(s);
	}
	nameList.close();

	ifstream number("namenum.in");
	number >> s;
	number.close();
	num += s;
	for (int i = 0; i < names.size; i++) {
		for (int j = 0; j < num.length() ; j++) {
			if () {
			
			}
		}
	}
}
