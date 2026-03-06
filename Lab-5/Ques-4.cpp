#include <iostream>
using namespace std;

class Item {
protected:
    string name;
    int quantity;

public:
    void setItem(string n, int q) {
        name = n;
        quantity = q;
    }
};
// Baked Goods (10% discount)
class BakedGoods : public Item {
protected:
    float discount = 0.10;
};
// Cakes (Price 600)
class Cakes : public BakedGoods {
private:
    int price = 600;
public:
    float calculateBill() {
        float total = price * quantity;
        return total - (total * discount);
    }
};
// Bread (Price 200)
class Bread : public BakedGoods {
private:
    int price = 200;
public:
    float calculateBill() {
        float total = price * quantity;
        return total - (total * discount);
    }
};
// Drinks (5% discount, Price 100)
class Drinks : public Item {
private:
    float discount = 0.05;
    int price = 100;

public:
    float calculateBill() {
        float total = price * quantity;
        return total - (total * discount);
    }
};
int main() {
    int choice, qty;
    float bill = 0;

    cout << "1. Cake (600, 10% discount)" << endl;
    cout << "2. Bread (200, 10% discount)" << endl;
    cout << "3. Drink (100, 5% discount)" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    cout << "Enter quantity: ";
    cin >> qty;

    if (choice == 1) {
        Cakes c;
        c.setItem("Cake", qty);
        bill = c.calculateBill();
    }
    else if (choice == 2) {
        Bread b;
        b.setItem("Bread", qty);
        bill = b.calculateBill();
    }
    else if (choice == 3) {
        Drinks d;
        d.setItem("Drink", qty);
        bill = d.calculateBill();
    }
    else {
        cout << "Invalid choice!";
        return 0;
    }
    cout << "Total Bill: " << bill << endl;
    return 0;
}
