/*
ID:aaron.l3
PROB:beads
LANG:C++
*/
//compile errors for triple red beads
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
  
  beads *= 2;
  colors = colors + colors; //we should check entire length of doubled string to get max, not just length of necklace
  vector<int> numbOfBeads(beads);
  
  for (int i = 1; i<beads; i++) {
    firstColor = colors.at(i);
    lastColor = colors.at(i-1); //we shouldn't add beads on: this allows proper checking to left
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
          lastColor = colors.at(y);
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
  if (max > beads){
    max = beads;
  }
  ofstream output("beads.out");
  output << max <<endl;
  output.close();
}
