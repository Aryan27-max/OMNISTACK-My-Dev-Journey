#include<iostream>
#include<ctime>
#include <cstdlib>

int main ()
{
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1 ;
    
    std::cout << "------------NUMBER GUESSING GAME--------------\n";

    do{
        
        std::cout << "Enter a number between (1-100) : ";
        std::cin >> guess;
        tries++;

        if(guess > num){
            std::cout << "Too High, Try again !!\n";
        }
        else if (guess < num){
            std::cout << "Too Low, Try again !!\n";
        }else{
            std::cout << "CORRECT!!\n";
        }
    }while(guess != num);

    std::cout << "total Number of tries : " << tries << '\n';
    std::cout << "-----THANKS FOR PLAYING-------\n";
    

    return 0;
}