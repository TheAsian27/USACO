/*
ID: aaron.l3
LANG: C++14
PROB: milk
*/

#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

struct farmer {
	farmer(int mc, int ma) : milkCost(mc), milkAmount(ma) {}
	int milkCost,milkAmount;
	bool operator<(farmer f) {
		return milkCost < f.milkCost;
	}
};

int main() {
	int farmers, reqMilk;
	vector<farmer> milkMen;
	ifstream input("milk.in");
	input >> reqMilk >> farmers;
	for (int i = 0; i < farmers; i++) {
		int unitCost, amount;
		input >> unitCost >> amount;
		milkMen.push_back(farmer(unitCost, amount));
	}
	sort(milkMen.begin(), milkMen.end());
	int cost = 0;
	for (int i = 0; i < farmers; i++) {
		if (reqMilk > milkMen[i].milkAmount) {
			cost += milkMen[i].milkAmount*milkMen[i].milkCost;
			reqMilk -= milkMen[i].milkAmount;
		}
		else {
			cost += reqMilk * milkMen[i].milkCost;
			break;
		}
	}
	ofstream output("milk.out");
	output << cost << "\n";
	output.close();
	return 0;
}
