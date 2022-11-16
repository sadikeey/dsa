#include<iostream>
using namespace std;

int add(int a, int b){
  return a+b;
}

int sub(int a, int b){
  return a-b;
}

int mul(int a, int b){
  return a*b;
}

int divi(int a, int b){
  return a/b;
}
int main() {
  cout<<add(4,3)<<endl;
  cout<<sub(4,3)<<endl;
  cout<<mul(4,2)<<endl;
  cout<<divi(4,2)<<endl;
}
