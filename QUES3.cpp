// Write a program to calculate area of a triangle using Heron's formula

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b, c;
    float S {0};
    float area {0};
    cout << "Enter the values of a b and c: ";
    cin >> a >> b >> c;

    S = (a+b+c)/2;

    area =sqrt(S*(S-a)*(S-b)*(S-c));
    cout << "Area is: " << area;

    return 0;
}