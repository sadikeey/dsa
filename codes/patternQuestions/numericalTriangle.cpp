/*
1
1 2 
1 2 3
1 2 3 4
*/
#include<iostream>
using namespace std;

int main() {
  int n;
  cin>>n;

  int t = 1;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout<<t;
      t++;
    }
    t = 1;
    cout<<endl;
  }
}
