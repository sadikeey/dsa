#include <iostream>
using namespace std;

int main() {
  int n; //123
  cin >> n;

  int reverse = 0;
  while (n > 0) {
    int rem = n % 10;
    reverse = reverse * 10 + rem;
    n /= 10;
  }
  cout << reverse << endl; //321
}
