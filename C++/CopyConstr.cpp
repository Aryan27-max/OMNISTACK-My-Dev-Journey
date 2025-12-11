#include<iostream>
#include<string>
using namespace std ;

class Teacher{
private:
    double salary;

    // properties or attributes
public:

    // parameterised constructor 
    Teacher(string name , string dept, string subject,double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    } 

    //copy constructor 
    Teacher(Teacher &orgobj) {
        cout << "i am custom copy constructor" << endl;
        this->name = orgobj.name;
        this->dept = orgobj.dept;
        this->subject = orgobj.subject;
        this->salary = orgobj.salary;

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
    //t1.getInfo();

    Teacher t2(t1);// copy constructor - invoke
    t2.getInfo();

    return 0 ;

} 