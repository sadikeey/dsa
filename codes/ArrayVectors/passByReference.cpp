#include <iostream>
using namespace std;

void print(int &param) { 
  cout << param << endl;
  param = 2;
}

int main() {
  int a = 5;

  print(a);
  cout<<a<<endl;
}
