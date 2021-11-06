#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  if (b * log(a) > d * log(c))
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}
