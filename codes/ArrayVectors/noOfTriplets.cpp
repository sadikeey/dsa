#include<iostream>
#include<vector>
#include "VectorsIO.cpp"
using namespace std;

void triplets(vector<int> v, int key) {
  int triplets=0;
  for(int i=0; i<v.size(); i++){
    for(int j=0;i<v.size(); j++){
      for(int k=0; k<v.size(); k++){
        int sum = v[i] + v[j] + v[k];
        if(sum == key){
          triplets ++;
        }
      }
    }
  }
  cout<<triplets;
}

int main() {
  vector<int> v;
  VectorsIO vec;

  vec.input(v);

  int key;
  cout<<"Key : ";
  cin>>key;

  triplets(v, key);
}
