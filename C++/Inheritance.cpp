#include<iostream>
#include<string>
using namespace std;

class Person{ // parent class
public :
    string name;
    int age ;

    Person (string name , int age){ // this is the constructor
       this->name = name;
       this->age = age;
    }

    ~Person(){
        cout << "parent destructor" << endl;
    }

};

class Student : public Person { // inheritance from patrnt class (person class)
public :
  int Rollno ;

    Student(string name, int age , int Rollno) : Person(name, age) { // this is a constructor
        this->Rollno = Rollno;
    } 

void getInfo(){
    cout << "name: " << name << endl;
    cout << "age: " << age << endl;
    cout << "Rollno: " << Rollno << endl;
}

~Student(){
    cout << "child destructor"<< endl;
}

};

int main (){
    Student s1("Aryan",19,336 ); // invoking the child class (student class)

    s1.getInfo();
    return 0 ;
}