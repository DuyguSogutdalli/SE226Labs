#include <iostream>
using namespace std;

void swapValues(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void printArray(int* d, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(d + i) << " ";
    }
    cout << endl;
}

int findSum(int* d, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(d + i);
    }
    return sum;
}

void shiftRight(int* d, int size) {
    if (size <= 1) return;

    int last = *(d + size - 1);

    for (int i = size - 1; i > 0; i--) {
        *(d + i) = *(d + i - 1);
    }

    *d = last;
}

int* createArray(int size) {
    int* d = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> *(d + i);
    }
    return d;
}

void deleteArray(int* d) {
    delete[] d;
}

int main() {
    cout << "Creating dynamic array..." << endl;

    int size;
    cout << "Enter array size: ";
    cin >> size;

    cout << "Enter values: ";
    int* d = createArray(size);

    cout << "\nArray elements:" << endl;
    printArray(d, size);

    cout << "\nSum of elements: " << findSum(d, size) << endl;

    cout << "\nSwapping two numbers" << endl;
    int a = 5, b = 8;

    cout << "Before swap" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swapValues(&a, &b);

    cout << "After swap" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "\nShifting array to the right..." << endl;
    shiftRight(d, size);

    cout << "Array after shiftRight:" << endl;
    printArray(d, size);

    cout << "\nDeleting array..." << endl;
    deleteArray(d);
    cout << "Memory released successfully." << endl;

    return 0;
}