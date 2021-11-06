#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  double a, b;
  cin >> a >> b;
  cout << "floor " << a << " / " << b << " = " << int(a / b) << endl;
  cout << "ceil " << a << " / " << b << " = " << ceil(a / b) << endl;
  cout << "round " << a << " / " << b << " = " << round(a / b) << endl;
  return 0;
}
