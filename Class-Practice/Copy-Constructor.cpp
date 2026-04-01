#include<iostream>
using namespace std;

class Student {
    string name;
    int id;
    float cgpa;
public:
    // Parameterized constructor
    Student(string n, int i, float c) {
        name = n;
        id = i;
        cgpa = c;
        cout<<"Parameterized Constructor invoked!"<<endl;
    }

    void displayData(){
        cout<<"Name: "<<name<<endl<<"ID: "<<id<<endl<<"CGPA: "<<cgpa<<endl;
    }

    void setData(string n, int i, float c) {
        name = n;
        id = i;
        cgpa = c;
    }

    // Destructor
    ~Student() {
        cout<<"Destructor invoked!"<<endl;
    }
};

int main(){
    Student s1("Ali", 12, 3.5);
    s1.displayData();

    Student s2=s1; // Copy constructor is called here
    s2.displayData();

    s2.setData("Ahmed", 15, 3.8); // Modifying s2's data
    s2.displayData();

    return 0;
}