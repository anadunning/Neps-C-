#include <iostream>

using namespace std;

int main(){

    int N, points = 0, counter = 1;
    long int V, aux = 0;

    cin >> N;

    for (int i = 0; i < N; i++){
        cin >> V;

        if (aux == V){
            counter++;
        }
        else {
            counter = 1;
        }
        aux = V;

        if (counter > points){
            points = counter;
        }
    /*    else {
            points = points;
        }
        // points = (counter > points) ? counter : points;*/
    }

    cout << points << endl;

    return 0;
}
