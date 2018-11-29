/*
ID : aaron.l3
PROB : beads
LANG : C++
*/

#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int beads = 0;
	char firstColor, lastColor;
	string colors;
	bool endBead = true;

	ifstream input;
	input.open("beads.in");
	input >> beads >> colors;
	input.close();
	colors += colors;

	vector<int> numbCollected(beads);

	for (int i = 0; i < beads; i++) {
		//Checking front
		firstColor = colors[(i) % (beads + 1)];
		lastColor = colors[(i + beads) % (beads + 1)];
		numbCollected[i] = 2;
		for (int j = 0; j < beads; j++) {
			if ((firstColor == colors[j + i]) || (firstColor == 'w')) {
				numbCollected[i]++;
			} else {
				break;
			}
		}
		for (int k = beads+1; k > beads; k--) {
			if ((firstColor == colors[k + i]) || (firstColor == 'w')) {
				numbCollected[i]++;
				break;
			} else {
				break;
			}
		}
	}

	int largestInt = 0;
	for (int i = 0; i < beads; i++) {
		if (largestInt < numbCollected[i]) {
			largestInt = numbCollected[i];
		}
	}

	ofstream outstream;

	outstream.open("beads.out");
	outstream << largestInt << endl;
	outstream.close();
	return 0;
}