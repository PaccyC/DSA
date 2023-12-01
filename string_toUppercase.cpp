#include <iostream>

int main(){
    //converting string to uppercase

        std::string sampleString;
    std::cout <<"Enter the sample string" << std::endl;
    std::cin >> sampleString;

    for(char& c:sampleString){
        if(c >= 'a' && c<= 'z'){
            c=c-32;
        }

    }
    std::cout << "Uppercased string : " << sampleString;
    return 0;
}