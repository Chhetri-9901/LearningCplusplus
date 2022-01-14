// Program to print the value of pi with 3 as precision and width


#include <iostream>
using namespace std;
#define pi  3.14159;

int main() {
    cout.precision(3);
    cout.width(10);
    cout.fill('$');
    cout << pi;

    return 0;
}