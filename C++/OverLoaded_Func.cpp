#include<iostream>

// Function Overloading - one function can have many types given they have different parameters 
//                        the out put will take in context the suitable versin and use it 
//                        the functin with it's parameters is called the signature of the function 

void bakepizza();
void bakepizza(std::string topping1);
void bakepizza(std::string topping1, std::string topping2);

int  main () 
{
    bakepizza("cheese", "peporoni");
}

void bakepizza(){
    std::cout << "here's your pizza";
}

void bakepizza(std::string topping1){
    std::cout << "here's your " << topping1 << " pizza\n";
} 

void bakepizza(std::string topping1, std::string topping2){
    std::cout << "here's your " << topping1 << " & " << topping2 << " pizza!!";
}

