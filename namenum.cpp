/*
ID : aaron.l3
PROB : namenum
LANG : C++14
*/

#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream nameList("dict.txt");
    string names[5000];
    for (int i = 0; i < 5000; i++) {
        nameList >> names[i];
    }
}
