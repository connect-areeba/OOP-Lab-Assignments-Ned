#include <iostream>
using namespace std;
class A {
public:
    void showA() { cout << "This is class A\n"; }
};
class B {
public:
    void showB() { cout << "This is class B\n"; }
};
// Derived class from both A and B
class C : public A, public B {
public:
    void showC() { cout << "This is class C\n"; }
};
int main() {
    C obj;
    obj.showA(); // from A
    obj.showB(); // from B
    obj.showC(); // from C
    return 0;
}
