#include <iostream>
using namespace std;

int main() {

    int altura;
    int i, k;

    cout << "Que altura tendra la piramide?: ";
    cin >> altura;

    for (i = 1; i <= altura; i++) {
        for (k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

return 0;
}
