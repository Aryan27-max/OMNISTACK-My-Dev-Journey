#include<iostream>

int main () {

// type conversion = conversion of one datatype to another datatype
//                  Implicit = automatic
//                  Explicit = Precede value with new data type (int)

// personal note - to be honest type conversion is not that important in C++ but you should know it 

/*

int correct = 8;
int questoins = 10;
double score = (correct / questoins) * 100; 

std::cout << score << "%" << '\n';

*/

// this will give us 0.0 as the output, since quetoins is of the int datatype

// just for display that u know what type conversion is i'll show 

int correct = 8;
int questoins = 10;
double score = (correct / (double)questoins) * 100; // converted the questoins to double

std::cout << score << "%" << '\n';

// now this will give us an output of 80 %
// the better solution to this could be to convert questions in double grom the start 
    return 0 ;
}