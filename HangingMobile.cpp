#include <iostream>

using namespace std;

int main(){

    int A, B, C, D;

    cin >> A >> B >> C >> D;

    if ((A == B + C + D) && (D == B + C) && (B == C)){
        cout << "S" << endl;
    }
    else {
        cout << "N" << endl;
    }

    return 0;
}
