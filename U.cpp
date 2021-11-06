#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  float a;
  cin >> a;
  int temp = a;
  if (a == temp)
    cout << "int " << temp;
  else
    cout << "float " << temp << " " << a - temp;
  return 0;
}
