#include<iostream>

int main (){

    // integer (whole number)
    int x= 2;
    int y =3;
    int sum = x + y;

    //double (numbers including decimal)
    double price = 2.50;
    double gpa = 9.9;
    double temp = 34.8;

    //char (only single charecters)
    char grade = 'A';
    char intial = 'B';
    char currency = '$';

    //boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = false;

    //strings (objects that represent a sequence of characters)
    std::string name = "Aryan";
    std::string age = "19";
    std::string food = "Pizza";
    std::string day = "Sunday";

    // addition of a string and string 
    std::cout << "Hello," << name <<'\n';
    std::cout << "U are " << age <<" years old"<<'\n';
      
    // use of const in C++ (the const value assigned to a variable can't be changed)   
    const double PI = 3.14159265358979323846; // it's good practice to write the constant variable in capital letters
    double radius = 5.0;
    double area = PI * radius * radius;
    std::cout << "Area of the circle is: " << area << '\n';  

 }
    
