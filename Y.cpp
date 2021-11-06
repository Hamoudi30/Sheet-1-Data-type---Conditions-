#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  a %= 100;
  b %= 100;
  c %= 100;
  d %= 100;
  if ((a * b * c * d) % 100 < 10)
    cout << "0" << (a * b * c * d) % 100;
  else
    cout << (a * b * c * d) % 100;
  return 0;
}
