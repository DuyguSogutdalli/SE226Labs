#include <iostream>
#include <string>
#include<cmath>

using namespace std;

int main(void) {
	double x1,x2,y1,y2;
	cout << "Enter a number x1" << endl;
    cin >>  x1;
    cout << "Enter a number x2" << endl;
    cin >>  x2;
    cout << "Enter a number y1" << endl;
    cin >>  y1;
    cout << "Enter a number y2" << endl;
    cin >>  y2;
    double distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout << distance << endl;
}
