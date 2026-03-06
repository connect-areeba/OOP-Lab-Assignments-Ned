#include <iostream>
using namespace std;

class Base {
private:
    int privateInt;
protected:
    int protectedInt;
public:
    int publicInt;

    void setPrivate(int x) { privateInt = x; }
    void setProtected(int x) { protectedInt = x; }
    void setPublic(int x) { publicInt = x; }

    int getPrivate() { return privateInt; }
    int getProtected() { return protectedInt; }
    int getPublic() { return publicInt; }
};

class publicChild : public Base {
public:
    void show() {
        cout << "Public Child Access:" << endl;
        cout << "Protected: " << protectedInt << endl;
        cout << "Public: " << publicInt << endl;
    }
};
class protectedChild : protected Base {
public:
    void show() {
        cout << "Protected Child Access:" << endl;
        cout << "Protected: " << protectedInt << endl;
        cout << "Public: " << publicInt << endl;
    }
};
class privateChild : private Base {
public:
    void show() {
        cout << "Private Child Access:" << endl;
        cout << "Protected: " << protectedInt << endl;
        cout << "Public: " << publicInt << endl;
    }
};

int main() {

    publicChild obj1;
    obj1.setPrivate(10);     
    obj1.setProtected(20); 
    obj1.setPublic(30);  
    obj1.show();
    cout << "Private using getter: " << obj1.getPrivate() << endl;

    cout << endl;

    protectedChild obj2;
    obj2.show(); 

    cout << endl;

    privateChild obj3;
    obj3.show(); 

    return 0;
}
