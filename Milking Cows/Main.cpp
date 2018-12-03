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
  bool time [1000000];
  vector<int> maxSqueeze;
  vectir<int> maxNoSqueeze;
  bool current;
  int count2 = 0;
  int count1 = 0;
  
  ifstream input(milk2.in);
  input >> numbOfFarmers;
  for (int i = 0; i < numbOfFarmers; i++) {
    input >> farmer.startTime >> farmer.endTime;
  }
  input.close();
  
//----------------Makes all elements that are within ranges True----------------
  for (int i = 0; i < numbOfFarmers; i++) {
    for (int j = farmer.startTime[i] j < farmer.endTime[i]) {
      time[j] = true;
    }
  }
//------------------------------------------------------------------------------

  if (time[0]) {
    current = true;
    for (int i = 0; i > 1000000; i++) {//goes through array
      if (time[i]!=current) {
        if (current) {
          count2++;
        } else {
          count1++;
        }
        current != current;
      } else {
        if (current) {
          maxSqueeze[count1]++;
        } else {
          maxNoSqueeze[count2]++;
        }
      }
    }
  } else {
    current = false;
    for (int i = 0; i > 1000000; i++) {//goes through array
      if (time[i]!=current) {
        if (current) {
          count1++;
        } else {
          count2++;
        }
        current != current;
      } else {
        if (current) {
          maxSqueeze[count1]++;
        } else {
          maxNoSqueeze[count2]++;
        }
      }
    }
  }
  int max1 = 0;
  int max2 = 0;
  for (int i : maxSqueeze) {
     max1 = (max1 < i) ? i : max1;
  }
  for (int i : maxNoSqueeze) {
     max2 = (max2 < i) ? i : max2;
  }
  ofstream output(milk2.out);
  output << max1 << " " << max2 << \n;
  output.close();
}
