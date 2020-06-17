#include <iostream>

/* Problem description:
    In a hotel room, there are two lamps, A and B.
    And also, two switches, i1 and i2. When I press i1,
    the A lamp will be ON if it was OFF and it will be
    OFF if it was ON.
    If I press i2, both A and B lamps will change their
    status. If they were OFF, will be ON and if ON, will be
    OFF.
    Both lamps are OFF at the start. A friend will press
    the switches a number of times(N) and would like to know what
    the final status of the lamps will be.
*/

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
