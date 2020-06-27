#include <iostream>

using namespace std;

int main(){

    int Ha, Ma, Hm, Mm;
    // Actual hour Ha, actual minute Ma, Meeting hour Hm, Meeting minute Mm

    cin >> Ha >> Ma >> Hm >> Mm;

    if (Hm == Ha){
        if (Mm - Ma >= 45){
            cout << "Sucesso" << endl;
        }
        else {
            cout << "Atrasado " << 45 - (Mm - Ma) << endl;
        }
    }
    else if (Hm > Ha){
        if (((Hm - Ha) * 60) + (Mm - Ma) >= 45){
            cout << "Sucesso" << endl;
        }
        else {
            cout << "Atrasado " << 45 -(((Hm - Ha) * 60) + (Mm - Ma)) << endl;
        }
    }
    return 0;
}
