#include <iostream>

int main ()
{
    std::string name;
    
    while(name.empty())
    {
        std::cout << "Please Enter Your Name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Welcome, " << name;
}