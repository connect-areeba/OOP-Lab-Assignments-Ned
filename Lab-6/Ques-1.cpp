#include <iostream>
using namespace std;

// Base Class
class Shape {
protected:
    int numberOfSides;
    double area;
public:
    // Parameterized Constructor
    Shape(int sides) {
        numberOfSides = sides;
        area = 0;
    }
    // Accessors
    int getNumberOfSides() const {
        return numberOfSides;
    }
    double getArea() const {
        return area;
    }
    // Mutators
    void setNumberOfSides(int sides) {
        numberOfSides = sides;
    }
    void setArea(double a) {
        area = a;
    }
};

// Rectangle Class
class Rectangle : public Shape {
protected:
    double length;
    double width;

public:
    Rectangle(double l, double w) : Shape(4) {
        length = l;
        width = w;
    }

    void generateArea() {
        area = length * width;
    }
};
// Circle Class
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : Shape(0) {
        radius = r;
    }
    void generateArea() {
        area = 3.1416 * radius * radius;
    }
};
// Triangle Class
class Triangle : public Shape {
private:
    double height;
    double base;

public:
    Triangle(double h, double b) : Shape(3) {
        height = h;
        base = b;
    }

    void generateArea() {
        area = (height * base) / 2;
    }
};

// Square Class
class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {
    }
    void checkSides() {
        if (length == width)
            cout << "Both sides are equal." << endl;
        else
            cout << "Sides are not equal." << endl;
    }
    void generateArea() {
        area = length * width;
    }
};
// Main Function
int main() {
    Rectangle r(5, 4);
    r.generateArea();
    cout << "Rectangle Area: " << r.getArea() << endl;

    Circle c(3);
    c.generateArea();
    cout << "Circle Area: " << c.getArea() << endl;

    Triangle t(6, 4);
    t.generateArea();
    cout << "Triangle Area: " << t.getArea() << endl;

    Square s(5);
    s.generateArea();
    s.checkSides();
    cout << "Square Area: " << s.getArea() << endl;

    return 0;
}