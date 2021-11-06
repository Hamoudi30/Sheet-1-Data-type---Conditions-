#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  int a, b, c;
  char x, y;
  cin >> a >> x >> b >> y >> c;
  if (x == '+') {
    if (a + b == c) { cout << "Yes\n"; }
    else { cout << a + b << endl; }
  }
  else if (x == '-') {
    if (a - b == c) { cout << "Yes\n"; }
    else { cout << a - b << endl; }
  }
  else if (x == '/') {
    if (a / b == c) { cout << "Yes\n"; }
    else { cout << a / b << endl; }
  }
  else if (x == '*') {
    if (a * b == c) { cout << "Yes\n"; }
    else { cout << a * b << endl; }
  }
  return 0;
}
