#include <iostream>
#include <string>   
using namespace std;

class Vehicle {
private:
    float fuel;
    float maxSpeed;
    bool flagstart;
public:
    string brand;
    string model;
    string color;
    float speed;
    float cost;   

    Vehicle() {   
        fuel = 0;
        maxSpeed = 0;
        speed = 0;
        cost = 0;
        flagstart = false;
    }

    void Display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Cost: " << cost << endl;
        cout << "Speed: " << speed << endl;
    }

    void set_maxSpeed(float maxSpeed) {
        this->maxSpeed = maxSpeed;
    }

    string getBrand() {
        return brand;
    }
    string getModel() {
        return model;
    }
    string getColor() {
        return color;
    }
    float getSpeed() {
        return speed;
    }

    bool start() {
        flagstart = true;
        return flagstart;
    }

    bool accelerate(float c) {
        if (flagstart && c > 0) {
            speed += c;
            if (speed > maxSpeed)
                speed = maxSpeed;
            return true;
        }
        return false;
    }

    bool brake(float s) {
        if (flagstart && s > 0) {
            speed -= s;
            if (speed < 0)
                speed = 0;
            return true;
        }
        return false;
    }

    bool stop() {
        speed = 0;
        flagstart = false;
        return true;
    }
};

int main() {
    Vehicle car1;  
    
    cout<<"====Vehicle 1===="<<endl;
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.color = "White";
    car1.cost = 200000;

    car1.set_maxSpeed(180);

    car1.start();
    car1.accelerate(60);
    car1.brake(20);

    car1.Display();

    car1.stop();

    Vehicle car2;
    
    cout<<"====Vehicle 2===="<<endl;

    car2.brand = "Porsche";
    car2.model = "Taycan";
    car2.color = "Black";
    car2.cost = 700000;

    car2.set_maxSpeed(180);

    car2.start();
    car2.accelerate(60);
    car2.brake(20);

    car2.Display();

    car2.stop();

    return 0;
}
