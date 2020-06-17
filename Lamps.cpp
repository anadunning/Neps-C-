#include <iostream>

using namespace std;

int main(){

    int A, B, i1, i2, N, i, interruptor;

    i = A = B = 0;
    i1 = 1;
    i2 = 2;

    cin >> N;

    while (i < N){

        cin >> interruptor;

        if (interruptor == i1){
            if (A == 0){
                A = 1;
            }
            else if (A == 1){
                A = 0;
            }
        }
        else {
            if (interruptor == i2) {
                if (A == 0){
                    A = 1;
                }
                else if (A == 1){
                    A = 0;
                }
                if (B == 0){
                    B = 1;
                }
                else if (B == 1){
                    B = 0;
                }
            }
        }
        i++;
    }
    cout << A << endl << B << endl;

    return 0;
}
