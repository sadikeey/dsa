#include <iostream>
#include <vector>
using namespace std;

class VectorsIO {
public:
  void input(vector<int> &v) {
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

  void output(vector<int> &v) {
    for (int i = 0; i < v.size(); i++)
      cout << v[i] << " ";
  }
};
