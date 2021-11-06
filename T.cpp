#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  int x, y, z;
  cin >> x >> y >> z;
  int mx = max({x, y, z});
  int mn = min({x, y, z});
  int sum = x + y + z;
  cout << mn << endl << sum - mx - mn << endl << mx << endl << endl;
  cout << x << endl << y << endl << z;
  return 0;
}
