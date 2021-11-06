#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  int a, b;
  char c;
  cin >> a >> c >> b;
  if (c == '+')
    cout << a + b;
  if (c == '-')
    cout << a - b;
  if (c == '*')
    cout << a * b;
  if (c == '/')
    cout << a / b;
  return 0;
}
