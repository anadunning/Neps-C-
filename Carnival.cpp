#include <iostream>

using namespace std;

int main(){

    double n1, n2, n3, n4, n5, maior, menor;
    maior = -1000.0;
    menor = 1000.0;

    cout.precision(1);
    cout.setf(ios::fixed);

    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    // Finding the largest:

    if (n1 > maior){
        maior = n1;
    }
    if (n2 > maior){
        maior = n2;
    }
    if (n3 > maior){
        maior = n3;
    }
    if (n4 > maior){
        maior = n4;
    }
    if (n5 > maior){
        maior = n5;
    }

    // Finding the smallest:

    if (n1 < menor){
        menor = n1;
    }
    if (n2 < menor){
        menor = n2;
    }
    if (n3 < menor){
        menor = n3;
    }
    if (n4 < menor){
        menor = n4;
    }
    if (n5 < menor){
        menor = n5;
    }

    cout << (n1 + n2 + n3 + n4 + n5 - maior - menor) << endl;

    return 0;
}
