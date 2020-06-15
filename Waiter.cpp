#include <iostream>

using namespace std;

int main(){

    int N, L, C, i, broken, sum;
    i = broken = sum = 0;

    cin >> N;

    while (i < N){

        cin >> L >> C;

        if (L > C){
            broken = C;
            sum += broken;
        }
        i++;
    }
    cout << sum << endl;

    return 0;
}
