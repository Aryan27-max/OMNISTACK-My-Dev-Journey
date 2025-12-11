#include<iostream>

int mynum = 3; // GLOBAL VAR

void printnum();

int main (){

    int mynum = 1;
    printnum();
    std::cout << ::mynum << '\n'; // use of the ( :: - scope resolution operator ) this ignores that local var and implements the global var
    
    return 0 ; 
}

void printnum(){
    int mynum = 2;
    std::cout << ::mynum << '\n'; // use of the ( :: - scope resolution operator ) this ignores that local var and implements the global var
}

// we should not use the global variable often as it polutes the global namespace 