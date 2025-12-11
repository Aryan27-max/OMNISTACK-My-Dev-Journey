#include <iostream>
#include <cmath>

// for common maths function in clude the C++ maths library #include <cmath>

int main ()
{
    int x = 3 ;
    int y = 4 ; 
    double z ;

     z = std::max(x , y); 
    // this will return the maximum value between x and y
    
    // z = std::min(x , y);
    // this will return the minimum value between x and y

    // z = std::sqrt(x);    
    // this will return the square root of x

    // z = std::round(4.6);
    // this will return the rounded value of the number

    // z = std::log(2);
    // this will return the natural log of the number

    // z = std::log10(100);
    // this will return the log base 10 of the number in a formal log base (number)

    // z = std::log2(8);
    // this will return the log base 2 of the number

    // z = std::abs(-4);
    // this will return the absolute value of the number even if the num is -ve or decimal it'll give the abs value

    // z = std::ceil(4.1);
    // this will turn the number to it's successor like 4.1 to 5 , 3.9 to 4 it'll never decrease the num

    // z = std::floor(4.9);
    // this will return the number to it's predecessor like 4.9 to 4 , 4.1 to 4 it'll never increase the num

    // z = std::exp(4);
    // this will return the value of e(euler's const) raised to the power of the number e^4 ≈ 54.5982

    // z = std::pow(2, 3);
    // this will return the value of the first number raised to the power of the second number

    // z = std::fmod(10, 3);
    // this will return the remainder of the division of the first number by the second number

    // z = std::remainder(10, 3);
    // this will return the remainder of the division of the first number by the second number

    // head to https://cplusplus.com/reference/cmath/ for more functions

    std::cout << z ;

    return 0 ;

}