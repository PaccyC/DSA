#include <iostream>

class Rectangle {
private:
    int length, width;

public:
    Rectangle();
    Rectangle(int, int);
    Rectangle(int);

    int area() {
        return length * width;
    }
};

// Default constructor
Rectangle::Rectangle() {
    length = 0;
    width = 0;
}

// Constructor with length and width
Rectangle::Rectangle(int a, int b) {
    length = a;
    width = b;
}

// Constructor for a square
Rectangle::Rectangle(int x) {
    length = x;
    width = x;
}

int main() {
    Rectangle rectangle1;
    Rectangle rectangle2(10, 5);
    Rectangle rectangle3(10); 

    std::cout << "Area 1: " << rectangle1.area() << std::endl;
    std::cout << "Area 2: " << rectangle2.area() << std::endl;
    std::cout << "Area 3: " << rectangle3.area() << std::endl;

    return 0;
}
