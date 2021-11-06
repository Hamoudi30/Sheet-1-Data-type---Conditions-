#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  int x, y;
  cin >> x >> y;
  if (x >= y)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
