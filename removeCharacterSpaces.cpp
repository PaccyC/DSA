#include <iostream>

//removing character spaces in string and print the result string.
int main(){
    std::string sampleString;
    std::cout <<"Enter the sample string" << std::endl;
    std::getline(std::cin,sampleString);
    
   std::string stringWithOutSpaces="";

int length=sampleString.length();
   for (int i=0;i<length;i++){
    if(std::isspace(sampleString[i])){
        continue;
    }
    else{
        stringWithOutSpaces +=sampleString[i];
    }
   }

   std::cout << "String without spaces: " << stringWithOutSpaces;
    


    return 0;
}