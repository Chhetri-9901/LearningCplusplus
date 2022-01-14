// Program to read and print values of variables of different data types

#include <iostream>
using namespace std;

int main() {

    int a {0};
    cout << "Enter an integer: ";
    cin >> a;

    float b {0};
    cout << "Enter a floating number: ";
    cin >> b;

    double c {0};
    cout << "Enter a double number: ";
    cin >> c;

    char d;
    cout << "Enter a character: ";
    cin >> d;
    
    char msg[10];
    cout << "Enter a word: ";
    cin >> msg;

    cout << a << " " << b << " " << c << " " << d << " " << msg << endl;

    return 0;
}