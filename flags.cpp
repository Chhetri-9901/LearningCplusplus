// To show the hexadecimal, octal and square root of the equivalent decimal number

// ERROR IN CODE

#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int num {0};
    cout << " Enter the number: ";
    cin >> num;

    cout.setf(ios::hex);
    cout << num;

}