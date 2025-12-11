#include<iostream>
#include <string>

// cout << (where cout - chartecter out put and << - insertion operator)
// cin >> (where cout - chartecter in put and >> - extraction operator)

int main ()
{
    std::string name;
    int age;

    std::cout << "Hello, What's your name - " ;
   // std::cin >> name; (now this cmd will be on ly valid till the user has a single word name
   // so thereby this is not a good practice to use this cmd soo we use the cmd below)
    std::getline(std::cin >>std::ws , name); // this will take the whole name along with the spaces
    //                    ^^^^^^^^^^^
    //       this is used to ignore the white spaces
    //  this is the correerepresent the get line function


    std::cout << "What's your age - " ;
    std::cin >> age;

    std::cout << "Hello, " << name << " nice to meet";
    std::cout << " you are " << age << " years old.";

    return 0 ;
} 