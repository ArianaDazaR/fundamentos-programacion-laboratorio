#include <iostream>
using namespace std;

int main () {

    double n, i, nume, fib;
    double a=0, b=1, denom=1;
    double suma=0;

    cout << "Cuántos términos quiere generar?: ";
    cin >> n;

    cout << "\nSerie: ";

    for (i = 1; i <= n; i++) {
        nume = a;

        cout << nume << "/" << denom;

        if (i < n) {
            cout << " + ";
        }

        suma = suma + nume/denom;

        fib = a + b;
        a = b;
        b = fib;
        denom = denom + 2;
    }

    cout << " = " << suma << endl;

    return 0;
}
