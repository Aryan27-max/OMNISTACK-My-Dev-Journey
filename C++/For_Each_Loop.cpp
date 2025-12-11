#include<iostream>

int main () 
{
    std::string students[] = {"spongebob", "patrick", "sandy"};

    for(std::string stud : students)
    {
        std::cout << stud << '\n';
    }

    return 0 ;
}