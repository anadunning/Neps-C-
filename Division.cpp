#include <iostream>

using namespace std;

int main(){

    double A, B, S;

    cout.precision(2);
    cout.setf(ios::fixed);

    cin >> A >> B;

    S = A / B;

    cout << S << endl;

    return 0;
}
