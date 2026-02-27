#include <iostream>
#include <string>
using namespace std;

class HotelInterface {
protected:
    string customerName;
    int days;
    float rent;
    const float rate;

public:
    // Constructor with member initializer list
    HotelInterface(string n, int d)
        : customerName(n), days(d), rate(1000.85), rent(0) {}

    void calculateRent() {
        if (days > 7) {
            rent = (days - 1) * rate;  // Discounted rent
        } else {
            rent = days * rate;        // Normal rent
        }
    }

    void display() const {
        cout << "Customer Name: " << customerName << endl;
        cout << "Days Stayed: " << days << endl;
        cout << "Total Rent: " << rent << endl;
    }
};

int main() {
    HotelInterface h("Saad", 9);
    h.calculateRent();
    h.display();

    return 0;
}
