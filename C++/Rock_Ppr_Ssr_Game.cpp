#include<iostream>
#include<ctime>

char UserChoice();                                  // |    
char ComputerChoice();                              // |
void showChoice(char choice);                       // |----> FUNCTION PROTOTYPE 
void ChooseWinner(char player, char computer);      // |


int main () 
{
    char player ;
    char computer;

    player = UserChoice();
    std::cout << "Your choice : ";

    showChoice(player);

    computer = ComputerChoice();
    std::cout << "Computer's choice : ";

    showChoice(computer);

    ChooseWinner(player,computer);

    return 0;

}

char UserChoice()
{
    char player;
    
    std::cout << "Rock-Paper-Scissors GAME\n";
    std::cout << "------------------------\n";
    do
    {
        std::cout << "Make a choose - \n";
        std::cout << "------------------------\n";
        std::cout << "Choose - \n";
        std::cout << "'r' for rock : \n";
        std::cout << "'p' for paper : \n";
        std::cout << "'s' for scissors : \n";
        std::cin >> player ;
    }while(player != 'r' && player != 'p' && player != 's');
    
    return player ;
}
char ComputerChoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
        case 1 : return 'r';
        case 2 : return 'p';
        case 3 : return 's';
    }
    
    return 0;
}
void showChoice(char choice)
{
    switch (choice)
    {
        case 'r': std::cout << "Rock \n";
                break;
        case 'p': std::cout << "Paper \n";
                break;
        case 's': std::cout << "Scissors \n";
                break;
    }
}
void ChooseWinner(char player, char computer)
{
    switch(player)
    {
    case 'r' : if(computer == 'r'){
            std :: cout << "it's a tie !!";
        }
        else if (computer == 's'){
            std::cout << "You win !!";
        }
        else{
            std::cout << "you lose !!";
        }
        break;

    case 's' : if(computer == 'r'){
            std :: cout << "You lose !!";
        }
        else if (computer == 's'){
            std::cout << "It's a tie !!";
        }
        else{
            std::cout << "You win !!";
        }
        break;

    case 'p' : if(computer == 'r'){
            std :: cout << "You win !!";
        }
        else if (computer == 's'){
            std::cout << "You lose !!";
        }
        else{
            std::cout << "It's a tie !!";
        }
        break;
    }
} 
