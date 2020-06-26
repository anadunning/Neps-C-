#include <iostream>

using namespace std;

int main(){

    double n1, n2, avg;

    cin >> n1 >> n2;

    avg = ((n1 * 2) + (n2 * 3)) / 5;

    if (avg >= 7.0){
        cout << "Aprovado" << endl;
    }
    else if (avg < 3.0){
        cout << "Reprovado" << endl;
    }
    else {
        cout << "Final" << endl;
    }
    return 0;
}
