#import <fstream>
#import <string>

using namespace std;

int main(){
  string colors;
  char firstColor,lastColor;
  vector<int> numbOfBeads(colors.size());
  ifstream input("beads.in");
  input >> colors;
  colors = colors + colors
  for (int i = 0; i<colors.size(); i++) {
      firstColor = colors.at(i);
      lastColor = colors.at(i+colors.size());
      numbOfBeads[i]=2
    for (int a = 0; a<colors.size(); a++) {
      if ((color.at(a+i+1)==firstColor)||(color.at(a+i+1)=='w')) {
        numbOfBeads[i]++;
      } else {
        break;
      }
    }
    for (int b= colors.size(); b>0; b--) {
      if ((color.at(b+i+colors.size()+1)==firstColor)||(color.at(b+i+colors.size()+1)=='w')) {
        numbOfBeads[i]++;
      } else {
        break;
      }
    }
  }
  input.close();
  for (int i = 1; i<colors; i++) {
   if (numbOfBeads[0] < numbOfBeads[i]) {
     numbOfBeads[0] = numbOfBeads[i];
   }
  }
  ofstream output("beads.out");
  output << numbOfBeads[0];
  output.close();
}
