#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  string a, b, c, d;
  cin >> a >> b >> c >> d;
  if (b == d)
    cout << "ARE Brothers\n";
  else
    cout << "NOT\n";
  return 0;
}
