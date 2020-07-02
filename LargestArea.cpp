#include <iostream>

using namespace std;

int main(){

    int L1, A1, L2, A2;

    cin >> A1 >> L1;

    cin >> A2 >> L2;

    if ((L1 * A1) > (L2 * A2)) {
        cout << "Primeiro" << endl;
    }
    else if ((L2 * A2) > (L1 * A1)) {
        cout << "Segundo" << endl;
    }
    else {
        cout << "Empate" << endl;
    }
    return 0;
}
