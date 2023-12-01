#include <iostream>

int main(){
    std::string sampleString;
    std::cout <<"Enter the sample string" << std::endl;
    std::cin >> sampleString;
    int length =0;
    int i=0;


    while(sampleString[length] != '\0'){
        length++;
        

    }
        std::cout << "The length of the entered string is " << length;
    
    return 0;
}