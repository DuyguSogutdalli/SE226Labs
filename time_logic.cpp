#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int number;
	cout << "Enter a number of second" << endl;
    cin >>  number;
    int hour =number/3600;
    int minutes = (number%3600) /60;
    int seconds = number %60;
    
    cout<< number <<" second is ,"<< hour<< " hour " << minutes <<" minutes, and "<< seconds << " seconds. "<<endl;
}

