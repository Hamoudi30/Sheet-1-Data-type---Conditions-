#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (max(a, c) > min(b, d))
    cout << -1;
  else
    cout << max(a, c) << " " << min(b, d);
  return 0;
}
