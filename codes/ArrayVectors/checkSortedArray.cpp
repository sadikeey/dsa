#include "VectorsIO.cpp"

void isSorted(vector<int> v) {
  bool sorted = true;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] <= v[i - 1])
      sorted = false;
  }
  sorted ? cout << "sorted" : cout << "!sorted" << endl;
}

int main() {
  vector<int> v;

  VectorsIO io;
  io.input(v);

  isSorted(v);
}
