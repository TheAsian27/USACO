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
    while (!nameList.oef()) {
        nameList >> names[i];
    }
}
