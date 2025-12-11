#include<iostream>

int main ()
{
    int rows ;
    int cols;
    char symbol;

    std::cout << "enter the number of rows : ";
    std::cin >> rows;

    std::cout << "enter the number of colums : ";
    std::cin >> cols;

    std::cout << "enter the number of symbol : ";
    std::cin >> symbol;

    for (int i = 1 ; i <= rows ; i++){
        for(int j = 1 ; j <= cols ; j++){
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    return 0;

}