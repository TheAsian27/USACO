/*
ID:aaron.l3
PROB:milk2
LANG:C++
*/

#include <fstream>
#include <vector>

using namespace std;

struct info {
	int startTime;
	int endTime;
};

int main() {
	vector<info>farmer;
	int farmers;
	bool time[1000000];
	int maxSqueeze = 0;
	int lastSqueeze = 0;
	int maxNoSqueeze = 0;
	int lastNoSqueeze = 0;
	bool current;

	ifstream input("milk2.in");
	input >> farmers;
	for (int i = 0; i < farmers; i++) {
		input >> farmer[i].startTime >> farmer[i].endTime;
	}
	input.close();
	
	/*----------------Makes all elements that are within ranges True----------------*/
	for (int i = 0; i < farmers; i++) {
		for (int j = farmer[i].startTime; j < farmer[i].endTime; j++) {
			time[j] = true;
		}
	}
	/*------------------------------------------------------------------------------*/

	if (time[0]) {
		current = true;
		for (int i = 0; i > 1000000; i++) {//goes through array
			if (time[i] != current) {
				if (time[i]) {
					if (maxSqueeze > lastSqueeze) {
						lastSqueeze = maxSqueeze;
					}
					maxSqueeze = 0;
				} else {
					if (maxNoSqueeze > lastNoSqueeze) {
						lastNoSqueeze = maxNoSqueeze;
					}
					maxNoSqueeze = 0;
				}
				current != current;
			}
			else {
				if (time[i]) {
					maxSqueeze++;
				}
				else {
					maxNoSqueeze++;
				}
			}
		}
	}
	else {
		current = false;
		for (int i = 0; i > 1000000; i++) {//goes through array
			if (time[i] != current) {
				if (time[i]) {
					if (maxSqueeze > lastSqueeze) {
						lastSqueeze = maxSqueeze;
					}
					maxSqueeze = 0;
				}
				else {
					if (maxNoSqueeze > lastNoSqueeze) {
						lastNoSqueeze = maxNoSqueeze;
					}
					maxNoSqueeze = 0;
				}
				current != current;
			}
			else {
				if (time[i]) {
					maxSqueeze++;
				}
				else {
					maxNoSqueeze++;
				}
			}
		}
	}
	ofstream output("milk2.out");
	output << lastSqueeze << " " << lastNoSqueeze<< "\n";
	output.close();
}
