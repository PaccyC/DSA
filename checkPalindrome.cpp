#include <iostream>

int main(){

    std::string sampleString;
    std::cout <<"Enter the sample string" << std::endl;
    std::cin >> sampleString;
    std::string reversedString= "";

    //palindrome without builtin functions
  int length=sampleString.length();
    for(int i=0;i<length;i++){
        if(sampleString[0] != sampleString[length-1]){
           std::cout << "The string is not a palindrome" <<std::endl;
        }
}

        for (int i=length-1;i>=0;i--){
            reversedString += sampleString[i];

        }
        std::cout << "The reversed string is: " << reversedString << std::endl;
        if (sampleString == reversedString){
            std::cout << "The string entered is a palindrome" <<std::endl;
        }
        else{
            std::cout << "The string entered is not a palindrome" <<std::endl;
        }

    return 0;
}