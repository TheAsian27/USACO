/*
ID:aaron.l3
PROB:milk2
LANG:C++
*/

#include <fstream>
#include <vector>
#include <algorith>

using namespace std;

struct info {
  int startTime;
  int endTime;
};

int main() {
  int farmers;
  int maxSqueeze = 0;
  int maxNoSqueeze = 0;

  ifstream input("milk2.in");
  input >> farmers;
  vector<info>farmer(farmers);
  for (int i = 0; i < farmers; i++) {
    input >> farmer[i].startTime >> farmer[i].endTime;
  }
  input.close();

  sort(farmer.begin(), farmer.end(), [](info a, info b)( return a.startTime < b.startTime; });
  
  for (int i = 0; i<farmer.size(); i++) {
    for (int j = i; j<farmer.size(); j++) {
      if (farmer[i].endTime > farmer[j].startTime) {//Checks if the end time is past the start time
        if (farmer[j].endTime > farmer.[i].endTime) {//Checks if new end time is greater than last end time
          farmer[i].endTime = farmer[j].endTime;
          if (farmer[i].endTime-farmer[i].startTime > maxSqueeze) {//Sets end time to new end time if it increaces the Squeeze time
            maxSqueeze = farmer[i].endTime-farmer[i].startTime;
          }
        }
        farmer.erase (myvector.begin()+j);//Deletes element @ point
        j--;//sets back loop
      }  
    }
    if (i == 0) {//Checks If it is the first loop
      maxNoSqueeze = farmer[i].startTime;//Makes max idle time first squeeze
    } else {
      if (farmer[i].startTime-farmer[i-1].endTime > maxNoSqueeze) {//Checks the space beetween last and first elements of farmers
        maxNoSqueeze = farmer[i].startTime-farmer[i-1].endTime;
      }
    }
  }
	ofstream output("milk2.out");
	output << maxSqueeze << " " << maxNoSqueeze<< "\n";
	output.close();
}
