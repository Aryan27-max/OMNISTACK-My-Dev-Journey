#include <iostream>

int main () 
{

    // swutch case = alternate way of using a lot of if else statements
  
    int month ;
    std::cout << "Enter The Month (1-12) : ";
    std::cin >> month ;
    
    switch(month)
    {
        case 1:
            std::cout << "it's january" ;
            break ;
        case 2:
            std::cout << "it's february" ;
            break;
        case 3 :
            std::cout << "it's March";
            break ;
        case 4:
            std::cout << "it's April" ;
            break ;
        case 5:
            std::cout << "it's May" ;
            break;
        case 6 :
            std::cout << "it's june";
            break ;
        case 7:
            std::cout << "it's july" ;
            break ;
        case 8:
            std::cout << "it's august" ;
            break;
        case 9 :
            std::cout << "it's september";
            break ;
        case 10:
            std::cout << "it's october" ;
            break ;
        case 11:
            std::cout << "it's november" ;
            break;
        case 12 :
            std::cout << "it's December";
            break ;
        default :
        std::cout << "Please enter in numbers only (1-12)";
    }

    return 0 ;
}