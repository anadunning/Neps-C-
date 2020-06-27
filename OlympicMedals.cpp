#include <iostream>

using namespace std;

int main(){

    int g1, s1, b1, g2, s2, b2;

    // quantity of gold, silver and bronze medals: g1, g2, s1, s2, b1, b2

    cin >> g1 >> s1 >> b1;

    cin >> g2 >> s2 >> b2;

    if (g1 > g2){
        cout << "A" << endl;
    }
    else if (g2 > g1){
        cout << "B" << endl;
    }
    else if (g1 == g2){
        if (s1 > s2){
            cout << "A" << endl;
        }
        else if (s2 > s1){
            cout << "B" << endl;
        }
        else if (s1 == s2){
            if (b1 > b2){
                cout << "A" << endl;
            }
            else if (b2 > b1){
                cout << "B" << endl;
            }
        }
    }
    return 0;
}
