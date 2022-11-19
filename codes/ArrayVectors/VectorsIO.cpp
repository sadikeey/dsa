class VectorsIO {
public:
  void input(std::vector<int> &v) {
    int size;
    std::cout << "Size : ";
    std::cin >> size;
    std::cout << std::endl << "Elements : ";

    for (int i = 0; i < size; i++) {
      int element;
      std::cin >> element;
      v.push_back(element);
    }
  }

  void output(std::vector<int> &v) {
    for (int i = 0; i < v.size(); i++)
      std::cout << v[i] << " ";
  }
};
