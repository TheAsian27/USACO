/*
TASK: barn1
ID: aaron.l3
LANG: C++14
*/


#include <fstream>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

int main() {
	int M, S, T, C;
	ifstream input("barn1.in");
	input >> M >> S >> C;
	vector<int> gaps;
	vector<int> nums;
	for (int i = 0; i < C; i++) {
		input >> T;
		nums.push_back(T);
	}
	sort(nums.begin(), nums.end());
	input.close();
	int ans = 1+(nums[C-1] - nums[0]);
	
	for (int i = 1; i < C; ++i) {
		if ((nums[i] - nums[i - 1]) != 1) {
			gaps.push_back(nums[i - 1] - nums[i]+1);
		}
	}
	sort(gaps.begin(), gaps.end());

	for (int i = 0; i < M-1; i++) {
		ans += gaps[i];
	}
	if (M >= C) {
		ans = C;
	}
	ofstream output("barn1.out");
	output << ans << "\n";
	output.close();
	return 0;
}
