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
    	for (int i = 0; i < names.length; i++) {
		for (int j = 0; j < number.length; j++) {
			switch (number[j]) {
				case 2:
					for (int k = 0; k < 3; k++) {
						
					}
			}
		}
	}
}
