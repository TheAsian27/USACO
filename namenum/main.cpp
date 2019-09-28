/*
ID : aaron.l3
PROB : namenum
LANG : C++14
*/

#include <fstream>
#include <string>

using namespace std;

int main() {
	string s;
	string num = "";
	ifstream nameList("dict.txt");
	vector<string> names;
	while (!nameList.eof()) {
		nameList >> s;
		names.push_back(s);
	}
	namelist.close();
    
	ifstream number("namenum.in");
	number >> s;
	number.close();
	num += s;
    
	for (int i = 0; i < number.length; i++) {
		for (int j = 0; j < 3; j++) {
			
		}
	}
}
