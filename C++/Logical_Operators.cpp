#include <iostream>

int main ()
{
    // && = the and operators checks if the condition is true on both side of the program and then executes the program
    // || = the OR operator checks of only one conditoin is true and executes the program
    // ! = the NOT operator checks if the condition is false and executes the program ot it just reverses the condition

    int temp;
    bool sunny = true ;

    std::cout << "Enter the Temprature:";
    std::cin >> temp;
    
    // if (temp > 0 && temp < 30)
    // {
    //     std::cout << "the temprature is good";
    // }
    // else
    // {
    //     std::cout << "the temprature is bad";
    // }

    if (temp <= 0 || temp >= 30) // use of the ternary operatopr
    {
        std::cout << "the temprature is bad\n";   // remember using the ternary operator
    }                                             // the choices reverse the order of the output
    else
    {
        std::cout << "the temprature is good\n";
    }

    if(! sunny) // use of the NOT operator
    {
        std::cout << "it's cloudy";
    }
    else
    {
        std::cout << "it's sunny";
    }


}