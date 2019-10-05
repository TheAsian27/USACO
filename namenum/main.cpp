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
	char c = 59;
	c += x * 3;
	c += y;
	if (c >= 'Q')
		c--;

	return c;
};

int main() {
	victor<string> names;
	string s;
	ifstream nameList("dict.txt");
	for (int i = 0; i < 4617; i++) {
		nameList >> s;
		names.push_back(s);
	}
	nameList.close();

	int num;
	unsigned int size = 0;
	int numNames = 4617;

	vector<int> digits;
	ifstream number("namenum.in");
	number >> num;
	number.close();
	while (num > 0) {
		digits.insert(digits.begin(), (num % 10));
		num /= 10;
		size++;
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < numNames; j++) {
			if ((yeet(digits[i], 0) != names[j].at(i) && yeet(digits[i], 1) != names[j].at(i)) && yeet(digits[i], 2) != names[j].at(i)) {
				names.erase(names.begin() + j);
				numNames--;
				j--;
			}
		}
	}

	for (int i = 0; i < numNames; i++) {
		if (names[i].size() > size) {
			names.erase(names.begin() + i);
			numNames--;
			i--;
		}
	}

	ofstream output("namenum.out");
	for (int i = 0; i < numNames; i++) {
		output << names[i] << "\n";
	}
	output.close();
	return 0;
}
