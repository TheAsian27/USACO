/*
ID : aaron.l3
PROB : namenum
LANG : C++14
*/

#include <fstream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

char yeet(int x, int y) {
	char a;
	switch (x) {
	case 2: 
		a = 'A';
		goto finish;
	case 3:
		a = 'D';
		goto finish;
	case 4:
		a = 'G';
		goto finish;
	case 5:
		a = 'J';
		goto finish;
	case 6:
		a = 'M';
		goto finish;
	case 8:
		a = 'T';
		goto finish;
	case 9:
		a = 'W';
		goto finish;

	case 7:
		a = 'P';
		if (y > 1) a += y;
		break;

	finish:
		a += y - 1;
	}
	return a;
};

int main() {
	vector<string> names;
	string s;
	long long num;
	unsigned int size = 0;
	int numNames = 0;

	vector<int> digits;
	ifstream number("namenum.in");
	number >> num;
	number.close();

	while (num > 0) {
		digits.insert(digits.begin(), (num % 10));
		num /= 10;
		size++;
	}

	ifstream nameList("dict.txt");
	for (int i = 0; i < 4617; i++) {
		nameList >> s;
		if (s.length() == size) {
			numNames++;
			names.push_back(s);
		}
	}
	nameList.close();



	for (int i = 0; i < size; i++) {
		for (int j = 0; j < numNames; j++) {
			if ((yeet(digits[i], 0) != names[j].at(i) && yeet(digits[i], 1) != names[j].at(i)) && yeet(digits[i], 2) != names[j].at(i)) {
				names.erase(names.begin() + j);
				numNames--;
				j--;
			}
		}
	}

	ofstream output("namenum.out");
	if (numNames == 0) {
		output << "NONE" << endl;
	}
	else {
		for (int i = 0; i < numNames; i++) {
			output << names[i] << endl;
			cout << names[i];
		}
	}
	output.close();
	return 0;
}
