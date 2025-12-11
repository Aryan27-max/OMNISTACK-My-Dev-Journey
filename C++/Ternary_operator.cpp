#include <iostream>

int main() 
{
    // ternary operator ?: = far better replacement to an if/else statement
    // format - condition ? expression1 (generally true)  : expression2 (generally false);

    //int grade = 100;
    //std::cout << (grade >= 60  ? "you passed" : "you failed");
    
    //int num = 10;
    //std::cout << (num %2 ? "ODD" : "EVEN");

    bool hungry = true ;
    std::cout << (hungry ? "you are hungry" : "you are not hungry");
}