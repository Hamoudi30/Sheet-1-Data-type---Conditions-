#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  int x = 0, y = 0;
  cin >> x >> y;
  if (x % y == 0 || y % x == 0) {
    cout << "Multiples\n";
  } else {
    cout << "No Multiples\n";
  }
  return 0;
}
