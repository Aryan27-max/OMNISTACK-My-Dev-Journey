#include <iostream>

int main() {
    std::string names[] = {"Spongebob", "Patrick", "Squidward"};

    // using sizeof(std::string)
    for(int i = 0; i < sizeof(names)/sizeof(std::string); i++) {
        std::cout << names[i] << '\n';
    }

    std::cout << "------------------------------\n";

    // using sizeof(names[i])
    for(int i = 0; i < sizeof(names)/sizeof(names[i]); i++) {
        std::cout << names[i] << '\n';
    }

    return 0;
}
