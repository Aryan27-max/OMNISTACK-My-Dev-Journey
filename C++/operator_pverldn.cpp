#include<iostream>

using namespace std ;

class Complex {
    double real ;
    double img;

    public :
    Complex (double r = 0 , double i = 0 ){
        real = r;
        img = i;
    }

    Complex operator + (const Complex& other){

        double newreal = real + other.real;
        double newimg = img + other.img;

        return Complex(newreal, newimg); 
    }

    void outinfo(){
        cout << real << "+" << img << "i" << endl;
    }
};

int main (){

    Complex c1(3.0, 2.0);
    Complex c2(9.0, 9.0);

    Complex c3 = c1 + c2 ;

    cout << "result of addition :";
    c3.outinfo();
   
    
}
