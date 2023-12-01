#include <iostream>
#include <string>
#include <cctype>

int main (){

std::string sampleString;
std::cout << "Enter the string to be reversed: " << std::endl;
std::getline(std::cin,sampleString);
std::cout << "The string entered is :  " <<sampleString << std::endl;

std::string reversedString = " ";

int length=sampleString.length();
for (int i=length-1;i>=0;i--){
    std::cout << "The character at " << i <<" is " << sampleString[i] << std::endl;
    reversedString +=sampleString[i];
    
}
std::cout << "The reversed string is " << reversedString;
    return 0;
}