// Write a program to calculate the area of a circle.

#include <iostream>
using namespace std;

const double pi = 3.14;

int main() {
    
    double rad =0;
    double area = 0;
    cout << "Enter the radius value : ";
    cin >> rad;

    cout << endl;
    area = pi*rad*rad;
    cout << "The area of a circle is " << area;

    return 0;
}