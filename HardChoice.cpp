#include <iostream>

using namespace std;

int main(){

    int c, b, p, Cr, Br, Pr;
    int Pc, Pb, Pp;
    Pc = Pb = Pp = 0;

    cin >> c >> b >> p;
    cin >> Cr >> Br >> Pr;

    if (Cr > c){
        Pc = Cr - c;
    }

    if (Br > b){
        Pb = Br - b;
    }

    if (Pr > p){
        Pp = Pr - p;
    }

    cout << Pc + Pb + Pp << endl;

    return 0;
}

// c. b. p: number of chicken, beef and pasta meals available
// Cr, Br, Pr: requests of chicken, beef and pasta meals
// Pc, Pb, Pp: passengers without their meal choice
