// Write a program to find the largest of the two numbers using ternary operator.

/*


#include <iostream>
using namespace std;

int main() {
    int a =0, b=0, large =0;
    cout << "Enter the two numbers " << endl;
    cin >> a >> b;
    
    large =(a > b) ? a : b;
    cout << "The largest number is " <<  large << endl;

    return 0;
}

*/




// Write a program to find the largest of the three numbers using ternary opeartor.

#include <iostream>
using namespace std;

int main() {

    int num1 =0, num2 =0, num3 =0, largest =0;
    cout << "Enter the three numbers." << endl;
    cin >> num1 >> num2 >> num3;

    largest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    cout << "The largest number is " << largest << endl;

    return 0;
}