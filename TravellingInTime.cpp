#include <iostream>

using namespace std;

int main(){

    int A, B, C;

    cin >> A >> B >> C;

    if (A == B || A == C || B == C){
        cout << "S" << endl;
    }
    else if ((A == B + C) || (B == A + C) || (C == A + B)){
        cout << "S" << endl;
    }
    else {
        cout << "N" << endl;
    }

    return 0;
}
