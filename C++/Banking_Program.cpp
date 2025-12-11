#include <iostream>
#include <iomanip>

void ShowBalance(double balance);
double deposit();
double Withdraw(double balance);

int main() 
{
    double balance = 1001;
    int choice = 0;

    do {
        std::cout << "--------------------------\n";
        std::cout << "Enter your choice:\n";
        std::cout << "1. Show balance\n";
        std::cout << "2. Deposit money\n";
        std::cout << "3. Withdraw money\n";
        std::cout << "4. Exit\n";
        std::cout << "--------------------------\n";
        std::cout << "Choice: ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();               // Reset cin state
            std::cin.ignore(10000, '\n');   // Discard bad input
            choice = -1;                    // Force default case
        }

        switch (choice) {
            case 1:
                ShowBalance(balance);
                break;
            case 2:
                balance += deposit();
                ShowBalance(balance);
                break;
            case 3:
                balance -= Withdraw(balance);
                ShowBalance(balance);
                break;
            case 4:
                std::cout << "Thanks for visiting.\n";
                break;
            default:
                std::cout << "Invalid input. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}

// Function to display current balance
void ShowBalance(double balance) {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Your current balance is: $" << balance << '\n';
}

// Function to deposit money
double deposit() {
    double amount;
    std::cout << "Enter amount to deposit: $";
    std::cin >> amount;

    if (amount > 0) {
        return amount;
    } else {
        std::cout << "Invalid amount. Deposit failed.\n";
        return 0;
    }
}

// Function to withdraw money
double Withdraw(double balance) {
    double amount;
    std::cout << "Enter amount to withdraw: $";
    std::cin >> amount;

    if (amount > balance) {
        std::cout << "Insufficient funds. Withdrawal failed.\n";
        return 0;
    } else if (amount <= 0) {
        std::cout << "Invalid amount. Withdrawal failed.\n";
        return 0;
    } else {
        return amount;
    }
}
