#include <iostream>
using namespace std;

class Calculator
{
private:
    int Num1, Num2, Num3;

public:
    Calculator(int a, int b, int c)
    {
        Num1 = a;
        Num2 = b;
        Num3 = c;
    }
    int add(int a, int b)
    {
        return (a + b);
    }
    int add(int a, int b, int c){
        return (a + b + c);
    }
    int multiply(int a, int b)
    {
        return (a * b);
    }
    int multiply(int a, int b, int c)
    {
        return (a * b * c);
    }
    int subtract(int a, int b)
    {
        return (a - b);
    }
    double divide(int a, int b)
    {
        if (b == 0)
        {
            cout << "Division by zero!\n";
            return 0;
        }
        return ((double)a / b);
    }
};
int main()
{
    Calculator calc(1,2,3);

    cout << calc.add(1,2) << endl;
    cout << calc.add(1,2,3) << endl;
    cout << calc.multiply(2,3) << endl;
    cout << calc.multiply(2,3,4) << endl;

    cout << calc.subtract(5,2) << endl;
    cout << calc.divide(10,2) << endl;

    return 0;
}
