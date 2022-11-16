#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;
  v.push_back(1);
  v.push_back(1);
  v.push_back(2);
  v.push_back(1);
  v.push_back(3);
  for (int var : v) {
    cout << var << " ";
  }

  int key;
  cin >> key;

  cout << endl;
    int occ=0;

  for (int i = v.size(); i >= 0; i--) {
    if (key == v[i]) {
      cout << v[i] << " found at index " << i;
      occ++;
    }
  }
    cout<<endl<<"Occurence of an element : "<<occ;
}
