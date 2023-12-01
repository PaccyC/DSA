#include <iostream>
#include <cctype>
#include <string>

int main(){
    char sampleCharacter;
    std::cout << "Enter the character: ";
    std::cin >>sampleCharacter;

    if(std::isalpha(sampleCharacter)){
        std::cout <<"The string entered is alpha";
    }
    else{
        std::cout << "The character entered is a digit";
    }
    return 0;
}