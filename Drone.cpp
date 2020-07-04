#include <iostream>

using namespace std;

int main(){

    int A, B, C, H, L;

    cin >> A >> B >> C;
    cin >> H >> L;

    if ((((A <= H) && (B <= L)) || ((B <= H) && (A <= L))) || (((A <= H) && (C <= L)) || ((C <= H) && (A <= L))) || (((B <= H) && (C <= L)) || ((C <= H) && (B <= L)))) {
        cout << "S" << endl;
    }
    else {
        cout << "N" << endl;
    }
    return 0;
}
