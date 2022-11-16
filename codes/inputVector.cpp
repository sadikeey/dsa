#include <iostream>
#include <vector>
using namespace std;

void func(vector<int> &v) {
  int size;
  cout << "Size : ";
  cin >> size;
  cout << endl << "Elements : ";

  for (int i = 0; i < size; i++) {
    int element;
    cin >> element;
    v.push_back(element);
  }
}

int main() {
  vector<int> v;

  func(v);

  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
}
