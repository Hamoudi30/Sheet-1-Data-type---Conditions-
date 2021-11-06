#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  int days;
  cin >> days;
  cout << days / 365 << " years" << endl;
  days %= 365;
  cout << days / 30 << " months\n";
  days %= 30;
  cout << days << " days\n";
  return 0;
}
