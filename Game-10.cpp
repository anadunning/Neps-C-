#include <iostream>

using namespace std;

int main(){

    int N, D, A;

    cin >> N >> D >> A;

    if (D > A){
        cout << D - A << endl;
    }
    else if (D < A){
        cout << N - A + D << endl;
    }
    else {
        cout << 0 << endl;
    }

    return 0;
}

// N: number of positions, example 20
// A: position of the airplane, example 13
// D: position of the destroying ship, example 8
