#include <iostream>

using namespace std;

int main(){

    int N, X1, Y1, X2, Y2;

    cin >> N;
    cin >> X1 >> Y1;
    cin >> X2 >> Y2;

    if ((X1 <= N/2 && Y1 <= N/2) && ((X2 <= N && Y2 > N/2) || (X2 > N/2 && Y2 <= N))){
        cout << "S" << endl;
    }
    else if ((X1 > N/2 && Y1 <= N/2) && ((X2 <= N/2 && Y2 <= N) || (X2 <= N && Y2 > N/2))){
        cout << "S" << endl;
    }
    else if ((X1 <= N/2 && Y1 > N/2) && ((X2 <= N && Y2 <= N/2) || (X2 > N/2 && Y2 <= N))){
        cout << "S" << endl;
    }
    else if ((X1 > N/2 && Y1 > N/2) && ((X2 <= N && Y2 <= N/2) || (X2 <= N/2 && Y2 > N/2))){
        cout << "S" << endl;
    }
    else {
        cout << "N" << endl;
    }
    return 0;
}

// Problem Description:
// GrandDad bought a chocolate bar for his two granddaughters. The chocolate bar has N rows and N columns.
// N is always even. There are two pictures in any two X, Y positions. GrandDad would like to give two equal pieces
// of the chocolate bar with one picture each. He would like to know whether with only one horizontal or vertical cut
// he can divide the chocolate bar leaving one picture in each piece.
// Input: N: number of rows and lines, always even; X1, Y1 and X2, Y2, picture coordinates
