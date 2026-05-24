#include <iostream>
using namespace std;

int SumaAcumulada (int n);

int main () {
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    while (n <= 0) {
        cout << "Debe ser un numero positivo. Intente de nuevo: ";
        cin >> n;
    }
    int suma = SumaAcumulada(n);
    cout << "\nLa suma desde 1 hasta " << n << " es " << suma << endl;
    return 0;
}

int SumaAcumulada(int n) {
    int suma = 0;
    for (int i=0; i<=n; i++) {
        suma = suma + i;
    }
    return suma;
}
