#include<iostream>

int main ()
{
    srand(time(NULL)); // intialise random nums b ased on current time

    int num1 = (rand() % 6) + 1 ;
    int num2 = (rand() % 6) + 1 ;
    int num3 = (rand() % 6) + 1 ;

// int num1 = (rand() % 6) + 1 ;
//                    ^^^  ^^^^
//                    |||  ||||
//                    ||| %6 only includes 5 random nums so we user +1 to make it 6 nums
// gives the remaineder OR in other words depicts the number of side of the dice u want 

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0 ;
}