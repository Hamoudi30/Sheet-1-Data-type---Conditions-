#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  char x;
  cin >> x;
  if (x < 97) {
    x += 32;
    cout << x << endl;
  } else {
    x -= 32;
    cout << x << "\n";
  }
  return 0;
}
