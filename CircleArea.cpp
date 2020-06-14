#include <iostream>

using namespace std;

int main(){

    double radius;
    double pi;

    pi = 3.14159;

    cin >> radius;

    // Precision which I expect to get in the output
    cout.precision(2);
    cout.setf(ios::fixed);

    cout << "Circle Area: " << radius * radius * pi << endl;

    return 0;
}

/* Explanation about setprecision()

    The setprecision( ) manipulator sets
    the total number of digits to be displayed
    when floating point numbers are printed.

    For example, the code:
    cout << setprecision(5) << 123.456;
    will print the following output to the screen (notice the rounding):

    123.46

    The setprecision( ) manipulator can also be used
    to set the number of decimal places to be displayed.
    In order for setprecision( ) to accomplish this task,
    you will have to set an ios flag.

    The flag is set with the following statement:

    cout.setf(ios::fixed);

    Once the flag has been set, the number you pass to
    setprecision( ) is the number of decimal places you want displayed.
    The following code:

    cout.setf(ios::fixed);
    cout << setprecision(5) << 12.345678;

    generates the following output on the screen (notice no rounding):

    12.34567

    From: https://mathbits.com/MathBits/CompSci/DataBasics/formatting.htm
*/
