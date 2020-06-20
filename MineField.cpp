#include <iostream>

using namespace std;

int main(){

    int N;
    int field[60];

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> field[i];
    }

    for(int i = 0; i < N; i++){
        int qtde = 0;
        qtde += field[i];
        if (i < N-1){
            qtde += field[i + 1];
        }
        if (i > 0){
            qtde += field[i - 1];
        }
        cout << qtde << endl;
    }
    return 0;
}
