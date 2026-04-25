#include <iostream>
using namespace std;

int LeerN (int n);
int NumPares (int n);

int main () {
    int n = LeerN(n);
    int pares = NumPares (n);
    cout << "\nEl numero " << n << " contiene " << pares << " digitos pares." << endl;
    return 0;
}

int LeerN (int n) {
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    while (n<=0) {
        cout << "Debe ser positivo. Intente de nuevo: ";
        cin >> n;
    }
    return n;
}

int NumPares (int n) {
    int digito = 0;
    int pares = 0;
    while (n>0) {
        digito = n % 10;
        if ((digito%2)==0) {
            pares++;
        }
        n = n/10;
    }
    return pares;
}
