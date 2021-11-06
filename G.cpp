#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const double pi = 3.141592653;
int main () {
  long long n;
  cin >> n;
  long long ans = n * (n + 1) / 2;
  cout << ans << '\n'; 
  return 0;
}
