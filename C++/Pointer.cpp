#include<iostream>

int main () {

    //Pointer - variables that stores memory adress of another variables 
    //          cause sometimes it's easier to work with adresses

    // & - adress of operator
    // * - Derefrence operator 

    std::string name = "Aryan";
    int age = 20;
    std::string freepizza[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    
    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizza = freepizza; // we don't use and & (adress of operator) cause the array is an adresson itself 

    std::cout << *pName << '\n'; // will give out the adress of name 
    std::cout << pAge << '\n'; // will give out the the value store at the adress of age
    std::cout << pFreePizza << '\n'; // will give out the adress of the adress of array 
    std::cout << *pFreePizza << '\n'; // will give out value stored at the adress of array 
}