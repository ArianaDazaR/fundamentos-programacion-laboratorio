// Numeros enteros
#include <iostream>
using namespace std;

int main () {

    int N;
    int suma=0;

    cout << "Ingrese el valor de N: ";
    cin >> N;

    for (int i=1; i<=N; i++) {
        suma = suma + 1;
    }

    cout << "La suma de los numeros enteros entre 1 y " << N << " es: " << suma << endl;

return 0;
}


// Numeros impares
#include <iostream>
using namespace std;

int main () {

    int N;
    int suma=0;

    cout << "Ingrese el valor de N: ";
    cin >> N;

    for (int i=1; i<=N; i++) {
        suma = suma + i;
    }

    cout << "La suma de los numeros enteros entre 1 y " << N << " es: " << suma << endl;

return 0;
}
