#include "VectorsIO.cpp"

int main() {
  vector<int> v;
  VectorsIO io;

  io.input(v);

  int key;
  cin >> key;

  int count = 0;

  for (int i = 0; i < v.size(); i++) {
    if (v[i] > key ) {
      count++;
    }
  }

  cout << count << endl;
}
