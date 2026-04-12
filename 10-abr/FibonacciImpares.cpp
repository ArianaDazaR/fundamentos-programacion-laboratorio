#include <iostream>
using namespace std;

int main () {

    float n, i, nume, fib;
    float a=0, b=1, denom=1;
    float suma=0;

    cout << "Cuántos términos quiere generar?: ";
    cin >> n;

    cout << "\nSerie: ";

    for (i = 1; i <= n; i++) {
        nume = a;
        cout << nume << "/" << denom;

        if (i < n) {
            cout << " + ";
        }

        a = b;
        fib = a + b;
        b = fib;
        denom = denom + 2;
        suma = suma + nume/denom;
    }

    cout << " = " << suma << endl;

    return 0;
}
