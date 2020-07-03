#include <iostream>

using namespace std;

int main(){

    int C, A;
    // C: capacity of cablecar
    // A: numbers of students, each trip will need a monitor

    cin >> C >> A;

    if (A % (C - 1) == 0){
        cout << (A / (C - 1)) << endl;
    }
    else {
        cout << (A / (C - 1)) + 1 << endl;
    }
    return 0;
}
