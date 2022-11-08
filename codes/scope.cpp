#include <iostream>
using namespace std;
int a = 6;
int main() {
  int a = 5;
  cout << a << endl;
  // 5
  cout << ::a << endl;
  // 6
}
