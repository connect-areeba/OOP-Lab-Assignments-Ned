#include <iostream>
using namespace std;

// Base Class
class Teacher {
private:
    string Name;
    int Age;
    string Institute;

public:
    // Setters
    void setName(string n) { Name = n; }
    void setAge(int a) { Age = a; }
    void setInstitute(string i) { Institute = i; }

    // Getters
    string getName() { return Name; }
    int getAge() { return Age; }
    string getInstitute() { return Institute; }
};

// Humanities Teacher
class HumanitiesTeacher : public Teacher {
private:
    string Department = "Humanities";
    string CourseName;
    string Designation;

public:
    void setCourse(string c) { CourseName = c; }
    void setDesignation(string d) { Designation = d; }

    void display() {
        cout << "\n--- Humanities Teacher ---" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Institute: " << getInstitute() << endl;
        cout << "Department: " << Department << endl;
        cout << "Course: " << CourseName << endl;
        cout << "Designation: " << Designation << endl;
    }
};

// Science Teacher
class ScienceTeacher : public Teacher {
private:
    string Department = "Science";
    string CourseName;
    string Designation;

public:
    void setCourse(string c) { CourseName = c; }
    void setDesignation(string d) { Designation = d; }

    void display() {
        cout << "\n--- Science Teacher ---" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Institute: " << getInstitute() << endl;
        cout << "Department: " << Department << endl;
        cout << "Course: " << CourseName << endl;
        cout << "Designation: " << Designation << endl;
    }
};

// Maths Teacher
class MathsTeacher : public Teacher {
private:
    string Department = "Maths";
    string CourseName;
    string Designation;

public:
    void setCourse(string c) { CourseName = c; }
    void setDesignation(string d) { Designation = d; }

    void display() {
        cout << "\n--- Maths Teacher ---" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Institute: " << getInstitute() << endl;
        cout << "Department: " << Department << endl;
        cout << "Course: " << CourseName << endl;
        cout << "Designation: " << Designation << endl;
    }
};

int main() {

    HumanitiesTeacher h;
    ScienceTeacher s;
    MathsTeacher m;

    string name, institute, course, designation;
    int age;

    // Humanities Input
    cout << "Enter Humanities Teacher Name: ";
    cin >> name;
    h.setName(name);

    cout << "Enter Age: ";
    cin >> age;
    h.setAge(age);

    cout << "Enter Institute: ";
    cin >> institute;
    h.setInstitute(institute);

    cout << "Enter Course: ";
    cin >> course;
    h.setCourse(course);

    cout << "Enter Designation: ";
    cin >> designation;
    h.setDesignation(designation);

    h.display();

    // Science Input
    cout << "\nEnter Science Teacher Name: ";
    cin >> name;
    s.setName(name);

    cout << "Enter Age: ";
    cin >> age;
    s.setAge(age);

    cout << "Enter Institute: ";
    cin >> institute;
    s.setInstitute(institute);

    cout << "Enter Course: ";
    cin >> course;
    s.setCourse(course);

    cout << "Enter Designation: ";
    cin >> designation;
    s.setDesignation(designation);

    s.display();

    // Maths Input
    cout << "\nEnter Maths Teacher Name: ";
    cin >> name;
    m.setName(name);

    cout << "Enter Age: ";
    cin >> age;
    m.setAge(age);

    cout << "Enter Institute: ";
    cin >> institute;
    m.setInstitute(institute);

    cout << "Enter Course: ";
    cin >> course;
    m.setCourse(course);

    cout << "Enter Designation: ";
    cin >> designation;
    m.setDesignation(designation);

    m.display();

    return 0;
}
