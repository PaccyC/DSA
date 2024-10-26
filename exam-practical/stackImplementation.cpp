#include <iostream>
#include <string>

class Stack {
private:
    int maxSize;
    int top;
    char *stackArray;

public:
    // Constructor to initialize the stack
    Stack(int size) {
        maxSize = size;
        stackArray = new char[maxSize];
        top = -1;
    }

    // Destructor to clean up the stack
    ~Stack() {
        delete[] stackArray;
    }

    // Push function to add an element to the stack
    void push(char value) {
        if (top >= maxSize - 1) {
            std::cout << "Stack overflow" << std::endl;
            return;
        }
        stackArray[++top] = value;
    }

    // Pop function to remove an element from the stack
    char pop() {
        if (top < 0) {
            std::cout << "Stack underflow" << std::endl;
            return '\0';
        }
        return stackArray[top--];
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Create a stack of size equal to the input string length
    Stack stack(input.length());

    // Push all characters of the string into the stack
    for (char ch : input) {
        stack.push(ch);
    }

    // Store the original string for output
    std::string originalString = input;

    // Pop all characters from the stack and store them back in the string
    for (int i = 0; i < input.length(); ++i) {
        input[i] = stack.pop();
    }

    // Output the original and reversed strings
    std::cout << "Original string: " << originalString << std::endl;
    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}
