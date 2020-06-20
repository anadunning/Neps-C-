#include <iostream>

using namespace std;

int main(){

    int N;

    cin >> N;

    int vetor[N];
    int num = 0;

    for(int i = 0; i < N; i++){
        cin >> vetor[i];
    }

    for(int i = 0; i < N-2; i++){
        if(vetor[i] == 1 && ((i + 1) < N)){
            if(vetor[i + 1] == 0 && vetor[i + 2] == 0){
                num += 1;
            }
        }
    }

    cout << num;

    return 0;
}
