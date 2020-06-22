#include <iostream>
#define pi 3.1416

using namespace std;

int main(){

    int R;

    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> R;

    cout << pi * R * R << endl;

    return 0;
}
