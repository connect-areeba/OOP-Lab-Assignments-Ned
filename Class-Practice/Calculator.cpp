#include<iostream>
using namespace std;

class calculator{
private:
    double num1;
    double num2;
public:
    void setNumbers(double n1, double n2){
        num1 = n1;
        num2 = n2;
    }
    double add(){
        return num1 + num2;
    }
    double subtract(){
        return num1 - num2;
    }
    double multiply(){
        return num1 * num2;
    }
    double divide(){
        if(num2 != 0){
            return num1 / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main(){
    calculator calc;
    double a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    calc.setNumbers(a, b);

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;

    return 0;
}