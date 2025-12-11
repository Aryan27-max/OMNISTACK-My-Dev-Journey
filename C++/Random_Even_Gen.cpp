#include<iostream>

int main ()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1 : std::cout << "You Won a bumper sticker ";
                 break;
        case 2 : std::cout << "You Won a chocolate cake ";
                 break;
        case 3 : std::cout << "You Won a concert tickets ";
                 break;
        case 4 : std::cout << "You Won a bumper RC car ";
                 break;
        case 5 : std::cout << "You Won a gift card ";
                 break;
    }
    
    return 0 ; 
}
