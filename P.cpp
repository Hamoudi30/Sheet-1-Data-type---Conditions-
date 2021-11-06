#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  int a;
  cin >> a;
  if ((a / 1000) % 2 == 0)
    cout << "EVEN";
  else
    cout << "ODD";
  return 0;
}
