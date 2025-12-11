#include <iostream>

int main ()
{
    double temp; 
    char unit ;

    std::cout << "__________TEMPRATURE CONVERTER__________\n";
    std::cout << "C = celcius\n";
    std::cout << "F = Farenheit\n";
    std::cout << "Enter your temprature unit(C/F): ";
    std::cin >> unit ;
    std::cout << "_________________________________________\n";

    if(unit == 'F' || unit == 'f')
    {
        std::cout << "Enter tempratutre in Celcius :";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0 ;
        std::cout << "the temprature iin Fareinheight = "<< temp << " F";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter temoratutre in Fareinheight :";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8 ;

        std::cout << "the temprature in Celcius = "<< temp << " C";   
    }
    else 
    {
        std::cout << "please enter a valid input";
    }
}