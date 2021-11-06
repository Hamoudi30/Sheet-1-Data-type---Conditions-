#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  double r;
  cin >> r;
  cout << fixed << setprecision(9);
  cout << pi * r * r;
  return 0;
}
