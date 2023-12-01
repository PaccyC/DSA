// #include <iostream>
// #include <string>
// #include <cctype>

// class Student{
//    public:
//     std::string name;
    

//     Student(const std::string& myName){
        
//         name=myName;
//         if (name.length() == 0){
//             std::cout << "Unknown";
//         }
//     }

//     //     void displayNames() {
         
//     //     std::cout << "The names that you have entered are:" << std::endl;
//     //     std::cout << "Name is: " << name << std::endl;
 
//     // }
// };

// int main(){
//     std::string name;

//     std::cout << "Enter the name";
//     std::getline(std::cin,name);
   
//     Student student(name);

   
//     std::cout << student.name;
//     return 0;

// }
#include<iostream>
using namespace std;
int main(){
 int scores[]={52, 78, 75, 68, 88, 63, 75, 90,78};
 int item=10, k=3, len=9, j=len-1;
while(j>=k){
scores[j+1]=scores[j];
j--;
}
scores[k]=item;
for (int index=0; index<len+1; index++){
cout<< scores[index]<<endl;
}
return 0;
}