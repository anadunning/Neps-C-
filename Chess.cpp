#include <iostream>

using namespace std;

int main(){

    int L, C;

    cin >> L >> C;

    if (L == C){
        cout << 1 << endl;
    }
    else if ((L % 2 == 0) && (C % 2 == 0)){
        cout << 1 << endl;
    }
    else if (((L % 2 == 0) && (C % 2 != 0)) || ((L % 2 != 0) && (C % 2 == 0))) {
        cout << 0 << endl;
    }
    else if (((L % 2 != 0) && (C % 2 != 0))){
        cout << 1 << endl;
    }
    return 0;
}
