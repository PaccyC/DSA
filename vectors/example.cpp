#include <iostream>
#include <vector>
using namespace std;
int main() {
  // method 1
  // initializer list
  vector<int> vector1 = {1, 2, 3, 4, 5};
  // method 2
  // uniform initialization
  vector<int> vector2{6, 7, 8, 9, 10};
  // method 3
//constructor initialization
  vector<int> vector3(5, 12);
  cout << "vector from method 1 = ";
  for (int i = 0; i < vector1.size(); i++) {
        cout << vector1[i] << " ";
    }
  
  cout << "\n vector from method 2 = ";
    for (int i = 0; i < vector2.size(); i++) {
        cout << vector2[i] << " ";
    }

  cout << "\n vector from method 3 = ";
   for (int i = 0; i < vector3.size(); i++) {
        cout << vector3[i] << " ";
    }
  return 0;
}
