#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  long long a, b;
  cin >> a >> b;
  int last_a = a % 10;
  int last_b = b % 10;
  cout << last_a + last_b << endl;
  return 0;
}
