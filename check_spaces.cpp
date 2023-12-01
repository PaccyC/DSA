#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string myString;
    
    std::cout << "Enter the string of your choice: ";
    std::getline(std::cin, myString);
  
    int whiteSpaces = 0;
    int length = myString.length();
    
    for (int i = 0; i < length; i++) {
        if (std::isspace(myString[i])) {
            whiteSpaces= whiteSpaces + 1;
        }
    }
    
    std::cout << "The number of white spaces in the string is: " << whiteSpaces << std::endl;
    std::cout << "Length of the string: " << length << std::endl;

    return 0;
}
