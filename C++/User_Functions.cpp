#include<iostream>
using namespace std ;

void HappyBirthday(std::string name , int age);

int main () {

    std::string name = "Aryan" ;
    int age = 20 ;

    HappyBirthday( name , age);
    
    return 0 ;
}
void HappyBirthday(std::string name , int age) {
    std::cout << "Happy Birthay " << name << '\n';
    std::cout << "Happy Birthay " << name << '\n';
    std::cout << "Happy Birthay " << name << '\n';
    std::cout << "Happy Birthay " << name << '\n';
    std::cout << "you are " << age << " years old" <<'\n';
}

