#include<iostream>
#include<string>
using namespace std ;

class Teacher{
private:
    double salary;

    // properties or attributes
public:
    string name;
    string dept;
    string subject;
    
    //methods or member functions 
    void changeDept (string newdept){
        newdept = dept;
    }
    
    //setter function - sets the value of the private variable
    void setsalary (double s){
        salary = s;
    }

    //getter - get's the value of the function fron the getter 
    double showSalary(){
        return salary;
    }
};

int main () {
    Teacher t1;
    t1.name = "Aryan";
    t1.dept = "CS";
    t1.subject = "C++";
    t1.setsalary(25000) ;

    cout << t1.name << endl;
    cout << t1.showSalary() << endl;

} 