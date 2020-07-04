#include <iostream>

using namespace std;

// if two cards have same value, points = 2 * (sum of the cards).
// if two cards are consecutive, points = 3 * (sum of the cards).
// none of the above cases, points - sum of the cards;

int main(){

    int L1, L2, C1, C2, scoreL, scoreC, m, n;

    cin >> L1 >> L2 >> C1 >> C2;
    m = L1;
    n = C1;

    if (L1 == L2){
        scoreL = 2 * (L1 + L2);
    }
    else if ((L2 == m + 1) || (L2 == m -1)){
        scoreL = 3 * (L1 + L2);
    }
    else {
        scoreL = L1 + L2;
    }

    if (C1 == C2){
        scoreC = 2 * (C1 + C2);
    }
    else if ((C2 == n + 1) || (C2 == n -1)){
        scoreC = 3 * (C1 + C2);
    }
    else {
        scoreC = C1 + C2;
    }

    if (scoreL > scoreC){
        cout << "Lia" << endl;
    }
    else if (scoreL < scoreC){
        cout << "Carolina" << endl;
    }
    else {
        cout << "empate" << endl;
    }

    return 0;
}
