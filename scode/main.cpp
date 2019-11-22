#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main() {
	string smokedCheese;
	vector<string> parents;
	vector<string> codes;
	ifstream input("scode.in");
	input >> smokedCheese;
	input.close();
	for (int i = 0; i < (smokedCheese.size() - 1); i++) {
		parents.push_back(smokedCheese.substr(i, 2));
		if (i < (smokedCheese.size() - 2)) {
			parents.push_back(smokedCheese.substr(i, 3));
		}
	}
	for (int i = 0; i < parents.size(); i++) {
		for (int j = i+1; j < parents.size(); j++) {
			if (parents[i] == parents[j]) {
				parents.erase(parents.begin() + j);
				j--;
			}
		}
	}
	while () {

	}
	ofstream output("scode.out");
	for (string s : parents) {
		output << s << endl;
	}
	output.close();
	return 0;
}
