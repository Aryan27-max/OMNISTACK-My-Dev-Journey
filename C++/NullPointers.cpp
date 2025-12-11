#include<iostream>

int main () {

    // Null value = a special value that means something has no value 
    //              when a pointer is holding a null value
    //              that pointer is not pointing to anything (null pinter)
    
    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an adress
    // was sucessfully assigned to a pointer 

    int *pointer = nullptr; // a null pointer is declared
    int x = 123; // a value x is declared

    pointer = &x; // the adress of x is assigned to the pointer

    if(pointer == nullptr){
        std::cout << "no value was assigned";
    }else{
        std::cout << "value was assigned";
    }
// generally an if else statment is used to check if a value is assigned to a pointer or not generally in dynamic progrraming  


    return 0 ;
}