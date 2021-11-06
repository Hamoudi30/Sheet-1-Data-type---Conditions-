#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  int x, y;
  char s;
  cin >> x >> s >> y;
  if (x > y && s == '>' || x < y && s == '<' || x == y && s == '=')
    cout << "Right" << endl;
  else
    cout << "Wrong\n";
  return 0;
}
