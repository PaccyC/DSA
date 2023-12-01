#include <iostream>

class Area{
    public:
    int length,width;
    
    public:
    Area(int);
    Area(int,int);



    int calculateArea(){
        return length *width;
    }
};
Area:: Area(int x){
        length=x;
        width=x;
    }

Area::   
    Area(int a, int b){
        length=a;
        width=b;
    }    
    
int main(){
    int length,width;
    
    std::cout << "Enter the length:  ";
    std::cin >>length;
     std::cout << "Enter the width:  ";
    std::cin >> width;
   
    Area  rectangleArea(length,width);
   
    Area squareArea(length);

    if(length == width){
     std::cout << squareArea.calculateArea() << std::endl;
    }
    else{
    std::cout << rectangleArea.calculateArea() << std::endl;
    }

  

    return 0;
}