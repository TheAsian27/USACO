/*
ID : aaron.l3
PROB : transform
LANG : C++
*/

#include <vector>
#include <fstream>
#include <string>

using namespace std;

int size;

char [][size] rotation(char [][size] x) {
  
}

int main()
{
  ifstream input("transform.in");
  input >> size;
  char square [size][size];
  char transform [size][size];
  for (int a = 0; a < size; a++) {
    for (int b = 0; a < size; b++) {
      input >> square[a][b]    
    }
  }
  for (int a = 0; a < size; a++) {
    for (int b = 0; a < size; b++) {
      input >> transform[a][b]    
    }
  }
  input.close();
  for (int i = 0; i < size; i++) {
    char temp[size][size];
    for (int j = 0; i < size; i++) {
      temp[i][j] = square[j][]
    }
  }
}
