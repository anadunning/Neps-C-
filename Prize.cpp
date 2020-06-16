#include <iostream>
//#include <cstdlib>

using namespace std;

int main(){

    long int N, A, sum = 0;
    int i;

    cin >> N;

    for (i = 0; i < N; i++) {
        cin >> A;
        sum += A;

        if (sum >= 1000000){
            cout << i + 1 << endl;
            break;
        }
    }

//    system("pause");

    return 0;
}
