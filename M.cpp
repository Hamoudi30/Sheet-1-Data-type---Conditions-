#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  char c;
  cin >> c;
  if (c >= 65 && c <= 90)
    cout << "ALPHA\nIS CAPITAL";
  if (c >= 97 && c <= 122)
    cout << "ALPHA\nIS SMALL";
  if (c >= 48 && c <= 57)
    cout << "IS DIGIT";
  return 0;
}
