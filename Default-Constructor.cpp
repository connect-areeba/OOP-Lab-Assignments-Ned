#include<iostream>
using namespace std;

class Student {
    string name;
    int id;
    float cgpa;
public:

    // Default constructor
    Student() {
        name = "";
        id = 0;
        cgpa = 0.0;
        cout<<"Constructor invoked!"<<endl;
    }

    void displayData(){
        cout<<"Name: "<<name<<endl<<"ID: "<<id<<endl<<"CGPA: "<<cgpa<<endl;
    }
    // Destructor
    ~Student() {
        cout<<"Destructor invoked!"<<endl;
    }
};

int main(){
    Student s1;
    s1.displayData();

    return 0;
}