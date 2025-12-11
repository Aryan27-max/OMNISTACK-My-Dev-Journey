//the modulus operator is used to give remainder if a number isdivided by it 
#include <iostream>

int main() {
    int x = 5;
    int sum = 10;
    int y = 2;
    int z = x % y;

    sum += 1 ;

    std::cout << z << '\n';
    std::cout << sum << '\n';
    return 0;
}
// the % will give us the remainder 1 
// += or -= or *= or /= are shorts for addition , substraction , multiplication , division


