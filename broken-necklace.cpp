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
  vector<int> numbOfBeads(beads);
  int beads = 0;
  
  ifstream input("beads.in");
  input >> beads;
  input >> colors;
  input.close();
  
  colors = colors + colors;
  
  for (int i = 0; i<beads; i++) {
    firstColor = colors.at(i);
    lastColor = colors.at(i+beads);
    numbOfBeads[i]=0;
    if (firstColor=='w') {
      for (int x = 0; x<beads; x++) {
        if (colors.at(x+i+1)!='w') {
          firstColor = colors.at(a+x+1);
          break;
        }
      }
    }
    if (lastColor=='w') {
      for (int y = beads; b>0; b--) {
        if (colors.at(y+i+beads)!='w')) {
          lastcolor = colors.at(y+i+beads);
          break;
        }
      }
    }
    for (int a = 0; a<beads; a++) {
      if ((colors.at(a+i+1)==firstColor)||(colors.at(a+i+1)=='w')) {
        numbOfBeads[i]++;
      } else {
        break;
      }
    }
    for (int b = beads; b>0; b--) {
      if ((colors.at(b+i+beads)==lastColor)||(colors.at(b+i+beads)=='w')) {
        numbOfBeads[i]++;
      } else {
        break;
      }
    }
  }
  for (int i = 1; i<colors; i++) {
   if (numbOfBeads[0] < numbOfBeads[i]) {
     numbOfBeads[0] = numbOfBeads[i];
   }
  }
  ofstream output("beads.out");
  output << numbOfBeads[0]<<endl;
  output.close();
}
