#include <iostream>

int main ()
{
    std::string name ;

    std::cout << "Enter Your Name : ";
    std::getline(std::cin,name); 

    // returns the length of a string 

/*    if(name.length() > 12)
{
    std::cout << "Your Name is more than 12 letters.";
}
else 
{
    std::cout << "Welcome, " << name ;   
}
} 
*/
/*
if (name.empty()){
    std::cout << "Please enter a name";
}else{
    std::cout << "Welcome, " << name ;
}
*/

/*
name.append("@gmail.com");

std::cout << "your name is now " << name;

*/

// std::cout << name.at(0); // gives the values of the string at index 0 

//name.insert(0, "@");
//std::cout << name;           // insert a value at the index of 0 



// std::cout << name.find(' ');  // finds the index value of the const 

//name.erase(0, 3);
//std::cout << name ;     // erases the string from the specified (start index, end index)

std::cout << name ;

}


// some other string functions 
/*
str.length() – returns the length of the string

str.size() – returns the length of the string (same as length())

str.empty() – returns true if the string is empty

str.clear() – removes all characters from the string

str.at(pos) – returns the character at position pos with bounds checking

str[pos] – returns the character at position pos (no bounds checking)

str.front() – returns the first character of the string

str.back() – returns the last character of the string

str.append(s) – appends string s to the end

str += s – appends string s (shorthand for append)

str.insert(pos, s) – inserts string s at index pos

str.erase(pos, len) – erases len characters starting from pos

str.replace(pos, len, s) – replaces len characters from pos with string s

str.substr(pos, len) – returns substring starting from pos of length len

str.find(s) – returns the index of first occurrence of substring s (or string::npos if not found)

str.rfind(s) – returns the index of last occurrence of substring s

str.find_first_of(s) – returns the first position where any character of s is found

str.find_last_of(s) – returns the last position where any character of s is found

str.compare(s) – compares str with s lexicographically (returns 0 if equal)

std::getline(cin, str) – reads an entire line into str from cin

str.c_str() – returns a C-style (null-terminated) string pointer

str.swap(s) – swaps content with another string s

std::to_string(x) – converts number x to string

std::stoi(str) – converts string str to integer

std::stol(str) – converts string to long

std::stod(str) – converts string to double

str.begin() / str.end() – returns iterators to begin/end of string

std::reverse(str.begin(), str.end()) – reverses the string

std::transform(str.begin(), str.end(), str.begin(), ::toupper) – converts string to uppercase

std::transform(str.begin(), str.end(), str.begin(), ::tolower) – converts string to lowercase

*/