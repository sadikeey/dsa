#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v;

  // Adding Elements
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);

  cout << "Size : " << v.size() << endl;         // Size Of vector
  cout << "Capacity : " << v.capacity() << endl; // Capacity Of vector

  cout << "Elements : ";
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " "; // Printing the elements

  // v.resize(10);                 // Resize the vector.
  // cout << endl << "After Resize : " << v.size() << endl;

  v.insert(v.begin() + 1, 0);

  cout << "Elements : ";
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " "; // Printing the elements

  v.erase(v.begin() + 2);

  cout << "Elements : ";
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " "; // Printing the elements
}
