#include <iostream>

using namespace std;

int main(){

    int ageM, ageA, ageB, ageC;

    cin >> ageM >> ageA >> ageB;

    ageC = ageM - (ageA + ageB);

    if ((ageA > ageB) && (ageA > ageC)){
        cout << ageA << endl;
    }
    else if ((ageB > ageA) && (ageB > ageC)){
        cout << ageB << endl;
    }
    else if ((ageC > ageA) && (ageC > ageB)){
        cout << ageC << endl;
    }

    return 0;
}
