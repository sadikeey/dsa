#include <iostream>
using namespace std;

int main() {
  int n; // 1234
  cin >> n;

  int sumOfDigits = 0;
  while (n > 0) {
    int rem = n % 10;
    sumOfDigits += rem;
    n /= 10;
  }
  cout<<sumOfDigits;
}

