    #include <iostream>

    // Namespace = provide a sloution for preventing name confilicts
    //             in a large project. Each entity needs a unique name.
    //             a namespace alows for identucally named entities 
    //             as long as the namespace are different.
    
    // the namespace specifically means to give a name to a variale with a similar entity 

    namespace first {
        int x = 10;
    }
    namespace second {
        int x = 20;
    }

    int main (){
        int x = 3;
    
        std::cout << x << '\n'; // as long as u will not tell the progran to take the value from 
                                // the namespace it will take the value from the main function
    
        std::cout << first::x << '\n'; // this will take the value from the first namespace
        std::cout << second::x << '\n'; // this will take the value from the second namespace
    
        // the other approach can also be to just declare the namespace at top of the program
        // and then use the namespace in the program eg - ( using namespace first; )
        // this will allow the program to take the value from the namespace directly
        // without mentioning the namespace in the program
    }












