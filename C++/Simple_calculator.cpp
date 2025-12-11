#include <iostream>
#include <cmath>

int main ()
{
    char op ;
    double num1 ;
    double num2 ;
    double result ;

    std::cout << "chosee the operator (+,-,*,/) : "  ;
    std::cin >> op ;

    std::cout << "enter number 1 - " ;
    std::cin >> num1 ;

    std::cout << "enter number 2 - "  ;
    std::cin >> num2 ;

    switch(op){

        case '+' :
            result = num1 + num2 ;
            std::cout << "Answer : " << result ;
            break ;
        case '-' :
            result = num1 - num2 ;
            std::cout << "Answer : " << result ;
            break ;
        case '*' :
            result = num1 * num2 ;
            std::cout << "Answer : " << result ;
            break ;
        case '/' :
        if(num2 == 0)
        {
            std::cout << "can't divide by zero" ;
        }else{
            result = num1 / num2 ;
            std::cout << "Answer : " << result ;
        }
        break ;
        default :
        std::cout << "INVLAIID OPERATOR" ;
    }

    return 0 ;
}