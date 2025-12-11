#include<iostream>
#include <string>
using namespace std;

class Student {

public :
    string name ;
    double* cgpaPtr; // points to a heap value (dynamic memory allocation)

Student(string name, double cgpa){   
    this->name = name;
    cgpaPtr = new double;// points to a float value of heap
    *cgpaPtr = cgpa;// defrence and put the value of cgpa in heap 
}

Student(Student &obj){
    this-> name = obj.name;
    cgpaPtr = new double; // dynamic memmory allocation (specifying heap type)
    *cgpaPtr = *obj.cgpaPtr; 
}

void getInfo(){
    cout << "name: " << name << endl;
    cout << "cgpa: " << *cgpaPtr << endl;
 }
};

int main (){
    Student s1("Aryan" , 9.8);
    Student s2(s1); 

    s1.getInfo();
    *(s2.cgpaPtr )= 9.5;
    s1.getInfo();

    s2.name = "Ananta";
    s2.getInfo();
    return 0 ;
}