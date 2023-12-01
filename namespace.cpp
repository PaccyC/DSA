#include <iostream>
#include <cmath>

int myGlobal = 905;

int cout() {
    int square = std::pow(myGlobal, 2);
    return square;
}

namespace userDefined {
    int insideNameSpace = 768;

    int getInsideNameSpace() {
        return insideNameSpace;
    }
}

int main() {
    int value = userDefined::getInsideNameSpace();
    std::cout << "Value inside the userDefined namespace: " << value << std::endl;
    std::cout <<"The value of myGlobal is " << myGlobal <<std::endl;

    int square = cout();
    std::cout << "Square of myGlobal: " << square << std::endl;
   

    return 0;
}
