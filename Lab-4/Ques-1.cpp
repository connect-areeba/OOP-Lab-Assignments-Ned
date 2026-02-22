#include <iostream>
#include <cstring>
using namespace std;

class Employee {
private:
    char* EmployeeName;
    const int EmployeeId;   // ID cannot change

public:
    // Constructor with Member Initializer List
    Employee(const char* name, int id) : EmployeeId(id) {
        EmployeeName = new char[strlen(name) + 1];
        strcpy(EmployeeName, name);
    }
    // Setter for Name (Name can change)
    void setName(const char* name) {
        delete[] EmployeeName;   // delete old memory
        EmployeeName = new char[strlen(name) + 1];
        strcpy(EmployeeName, name);
    }
    // Getter for Name
    const char* getName() const {
        return EmployeeName;
    }
    // Getter for ID (No setter because ID must not change)
    int getId() const {
        return EmployeeId;
    }
    // Destructor
    ~Employee() {
        delete[] EmployeeName;
    }
};
int main() {
    // Creating 3 initialized objects
    Employee Employee1("Areeba", 101);
    Employee Employee2("Ali", 102);
    Employee Employee3("Sara", 103);
    // Changing only names
    Employee1.setName("Areeba Khan");
    // Displaying results using getters
    cout << "Employee 1: " << Employee1.getName()
         << " | ID: " << Employee1.getId() << endl;
    cout << "Employee 2: " << Employee2.getName()
         << " | ID: " << Employee2.getId() << endl;
    cout << "Employee 3: " << Employee3.getName()
         << " | ID: " << Employee3.getId() << endl;

    return 0;
}

