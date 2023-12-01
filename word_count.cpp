#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string sampleString;
    std::cout << "Enter the sample string of your choice: " << std::endl;
    int numberOfCharacterswithSpaces=0;
    int numberOfCharactersWithoutSpaces=0;

    std::getline(std::cin,sampleString);
    int length= sampleString.length();

    
    for (int i=0;i<length;i++){
        if (std::isspace(sampleString[i])){
            continue;
         
        }
        numberOfCharactersWithoutSpaces += 1;
        numberOfCharacterswithSpaces ++;
    }
    
    std::cout <<"The number of characters is : " << numberOfCharacterswithSpaces << std::endl;
    std::cout <<"The number of characters without spaces is : " << numberOfCharactersWithoutSpaces;

    
    return 0;
}