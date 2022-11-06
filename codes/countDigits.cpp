#include <iostream>
using namespace std;

int main() {
  int n; // 1234
  cin >> n;

  int numberOfDigits = 0;
  while (n > 0) {
    numberOfDigits++;
    n = n / 10;
  }
  cout << "Number Of Digits : " << numberOfDigits;
}
