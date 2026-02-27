#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    int size;   // current size

public:
    // Parameterized constructor
    DynamicArray(int s) {
        size = s;
        arr = new int[size];
        // initialize all values with 0
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }
    // add function
    void add(int value) {
        int* newArr = new int[size + 1];
        // copy old elements
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        // add new value at end
        newArr[size] = value;
        delete[] arr;   // delete old array
        arr = newArr;   // point to new array
        size++;         // increase size
    }
    // size function
    int getSize() const {
        return size;
    }
    // destructor
    ~DynamicArray() {
        delete[] arr;
    }
};
int main() {
    DynamicArray obj(3);   // initial size = 3
    obj.add(5);
    obj.add(10);
    cout <<"Curent Size: "<< obj.getSize();   // only current size printed
    return 0;
}