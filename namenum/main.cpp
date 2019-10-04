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

char yeet(int x, int y) {
	char c = 62;
	c += x * 3;
	c += y;
	return c;
};

int main() {
	string s;
	ifstream nameList("dict.txt");
	victor<string> names;
	while (!nameList.eof()) {
		nameList >> s;
		names.push_back(s);
	}
	nameList.close();

	int num;
	vector<char> digits;
	ifstream number("namenum.in");
	number >> num;
	number.close();
	while (num > 0) {
		digits.insert(digits.begin(), (num % 10));
		num / 10;
	}

	for (int i = 0; i < digits.size; i++) {
		for (int j = 0; j < names.size; j++) {
			for (int k = 0; k < 3; k++) {
				if (yeet(num[i], k) != names[j].at(i)) {
					names.erase(names.begin()+j);
					j--;
				}
			}
		}
	}
	ofstream output("transform.in");
	for (int i = 0; i < names.size; i++) {
		output << names[i] << endl;
	}
	output.close();
	return 0;
}
