#include<iostream>
#include<string>
using namespace std ;

class Teacher{
private:
    double salary;

    // properties or attributes
public:

    // non - parameterised constructor 
    //Teacher(){
    //    dept = "Computer Science";
    //} 

    // parameterised constructor 
    Teacher(string n, string d, string s,double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    } 


    string name;
    string dept;
    string subject;
    
    //methods or member functions 
    void changeDept (string newdept){
        newdept = dept;
    }
    
    void getInfo(){
        cout << "name: " << name << endl;
        cout << "subject: " << subject << endl;
    }
};

int main () {
    Teacher t1("Aryan", "ComputerScience ", "C++", 25000);
    t1.getInfo();

} 