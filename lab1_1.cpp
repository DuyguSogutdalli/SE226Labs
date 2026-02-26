#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string name;
    string studentId;

    cout << "What is your name?" << endl;
    cin >> name;
    cout << "Hello " << name << "." << endl;

    cout << "What is your Student ID? " << endl;
    cin >> studentId;
    cout << "Your ID is " << studentId << "." << endl;
}
