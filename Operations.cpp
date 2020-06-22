#include <iostream>

using namespace std;

int main(){

    char op;
    double x, y;

    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> op;

    cin >> x >> y;

    if (op == 'M'){
        cout << x * y << endl;
    }
    else if (op == 'D'){
        cout << x / y << endl;
    }

    return 0;
}
