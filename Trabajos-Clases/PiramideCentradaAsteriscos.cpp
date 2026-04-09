#include <iostream>
using namespace std;

int main() {

    int altura, i, k, j;

    cout << "Que altura tendra la piramide?: ";
    cin >> altura;

    for (i = 1; i <= altura; i++) {
        for (j = 1; j <= altura - i; j++) {
            cout << " ";
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

return 0;
}
