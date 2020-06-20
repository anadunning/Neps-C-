#include <iostream>

using namespace std;

int main(){

    int P, D1, D2;

    cin >> P >> D1 >> D2;

    if (P == 0){
        if ((D1 + D2) % 2 == 0){
            cout << 0;
        }
        else {
            cout << 1;
        }
    }
    else if (P == 1){
        if ((D1 + D2) % 2 == 0){
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    return 0;
}
