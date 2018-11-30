/*
ID:aaron.l3
PROB:beads
LANG:C++
*/

#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){
  string colors;
  char firstColor,lastColor;
  int beads = 0;
  
  ifstream input("beads.in");
  input >> beads;
  input >> colors;
  input.close();
  
  vector<int> numbOfBeads(beads);
  
  colors = colors + colors;
  
  for (int i = 0; i<beads; i++) {
    firstColor = colors.at(i);
    lastColor = colors.at(i+beads-1);
    numbOfBeads[i]=0;
    if (firstColor=='w') {
      for (int x = i; x<beads; x++) {
        if (colors.at(x)!='w') {
          firstColor = colors.at(x);
          break;
        }
      }
    }
    if (lastColor=='w') {
      for (int y = i - 1; y>=0; y--) {
        if (colors.at(y)!='w') {
          lastcolor = colors.at(y);
          break;
        }
      }
    }
    for (int a = i; a<beads; a++) {
      if ((colors.at(a)==firstColor)||(colors.at(a)=='w')) {
        numbOfBeads[i]++;
      } else {
        break;
      }
    }
    for (int b = i-1; b>=0; b--) {
      if ((colors.at(b)==lastColor)||(colors.at(b)=='w')) {
        numbOfBeads[i]++;
      } else {
        break;
      }
    }
  }
  int max = 0;
  for (int i : numbOfBeads) {
     max = (max < i) ? i : max;
  }
  ofstream output("beads.out");
  output << max <<endl;
  output.close();
}
