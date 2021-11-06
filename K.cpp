#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  int a, b, c;
  cin >> a >> b >> c;
  cout << min({a, b, c}) << " " << max({a, b, c});
  return 0;
}
