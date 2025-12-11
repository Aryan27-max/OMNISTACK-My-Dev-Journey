#include<iostream>
using namespace std;

int main(){

    int num1 , num2, result;
    
    cout<< "Enter numerator and denominator: "<< endl;
    cin >> num1 >> num2;

    // start of try,catch and throw 

    try {
        if (num2 == 0 )
        {
            throw num2;
        }
        result = num1 / num2; // division function 
    }
    catch(int ex) // ex = exceprtion 
    {
        cout << "divion by zero is not possible"<< endl;
        return 0 ;
    }

    cout << result ;
    
}