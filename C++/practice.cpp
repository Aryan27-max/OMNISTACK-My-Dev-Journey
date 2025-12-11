#include<iostream>
#include<string>

using namespace std;

class Area {
private :
    float length ;
    float breadth ;
    float Area;
public :
    void getinfo(){
        cout << "length : "<< endl;
        cin >> length;
        cout << "breadth : "<< endl;
        cin >> breadth;
    }

    void CalcArea(){
        
        Area = length * breadth; 
    }

    void outinfo(){
        cout << "Area of rectangle : " << Area << endl;
    }
    
};

int main () {
    Area a1;
    a1.getinfo();
    a1.CalcArea();
    a1.outinfo();

    return 0;

}

#include<iostream>

int main()
{
    // do while loop = a do while loop executes a block of code aleast once 
    //                 and then continue to do it until the condition is true
      
    int num;

    do {
        std::cout << "enter a num :";
        std::cin >> num;
    }while(num < 0);

    std::cout << "your num is :" << num ;

    return 0;
}
    