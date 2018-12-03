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
}

int main() {
  vector<info>farmer;
  int numbOfFarmers;
  ifstream input(milk2.in);
  input >> numbOfFarmers;
  for (int i = 0; i < numbOfFarmers; i++) {
    input >> farmer.startTime >> farmer.endTime;
  }
  input.close();
  
  
  
}
