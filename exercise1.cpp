#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::string firstname;
    std::string lastname;
    int age;
    std::cout << "Enter your firstname :"<< std::endl;
    std::cin >>firstname;
    std::cout << "Enter your lastname :"<< std::endl;
    std::cin >>lastname;
    std::cout << "Enter your age :"<< std::endl;
    std::cin >>age;

    std::cout << "Your firstname is "<< firstname <<", your lastname is " <<lastname << " and your age is "<< age;
    return 0;
}