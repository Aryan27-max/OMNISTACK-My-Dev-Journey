#include<iostream>

std::string Concatstring (std::string string1 , std::string string2 );

int main() 
{
    std::string firstname = "Aryan" ;
    std::string lastname = "gupta";
    std::string Fullname = Concatstring(firstname , lastname);
    
    std::cout << "Hello, " << Fullname << '\n';
    
    return 0 ;
}

std::string Concatstring (std::string string1 , std::string string2 ){
    return string1 + " " + string2 ;
}