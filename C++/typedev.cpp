#include<iostream>
#include<vector>

 // type dev = resreved datatypes to createa an additional name (alias)
    //            for another datatype. New identifier for an existing type
    //            helps with redabitlity and reduces typos, use when there is a clear benifit 
    
// typedef std::vector<std::pair<std::string, int>> pairlist_t; // this will create a new datatype called pairlist_t 
 
typedef std::string text_t;
 //           instead of typedev its is more common to use "using" keyword (works better with templates)
 using num_t = int ;



int main () {

    text_t name = "Aryan";
    num_t age = 19;

    std::cout << name << '\n';
    std::cout << age << '\n';
   return 0;
      
}