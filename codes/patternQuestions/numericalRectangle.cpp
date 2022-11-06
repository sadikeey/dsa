/*
1 2 3 4 5 6 7
2 3 4 5 6 7 1
3 4 5 6 7 1 2
4 5 6 7 1 2 3
5 6 7 1 2 3 4
6 7 1 2 3 4 5
7 1 2 3 4 5 6
*/
#include<iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  for (int i=1; i<=n; i++){
    for(int j=i; j<=n;j++){
      cout<<j<<" "; 
    }
    for(int j=1; j<i; j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
}
