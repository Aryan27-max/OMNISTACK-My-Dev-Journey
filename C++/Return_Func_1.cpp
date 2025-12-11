#include<iostream>

double square (double length);
double cube (double length);

int main () {
    double length = 10;
    double area = square(length);
    double volume = cube(length);

    std::cout << "the area of the cube is : " << area << "cm^2\n";
    std::cout << "the colume of the cube is : " << volume << "cm^3\n";

    return 0;
}

double square (double length) {
    return length * length;
} 

double cube (double length) {
    return length * length * length;
} 
