#include<iostream>
using namespace std;

int main (int argc, char *argv[])
{
  int a,n;
  cin>>a>>n;

  int pow=1;
  for(int i=1; i<=n; i++){
    pow *= a;
  }
  cout<<pow;
  return 0;
}
