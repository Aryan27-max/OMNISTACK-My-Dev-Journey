#include<iostream>

int main () 
{
    // sizeof() = determines the size of the datatype in bytes 
    //            it generally helps determine the size of an array 
    
    double gpa = 9.8;
    double ages[] = {18, 20, 30, 21};
    std::string student[] = {"spongebob", "patrick", "Squidward", "shophie"};

    std::cout << sizeof(ages)/ sizeof(ages[0]) << " elements\n";
    std::cout << sizeof(student)/sizeof(std::string) << " elements\n";

    return 0 ; 
}