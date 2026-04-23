// Cuando se usa void resolvente (int a, int b, int c, float &x1, float &x2);

#include <iostream>
#include <cmath>

using namespace std;

// Prototipo
void resolvente(int a, int b, int c, float &x1, float &x2);

int main() {
    int a, b, c;
    float raiz1, raiz2;

    cout << "Ingrese coeficientes a, b, c: ";
    cin >> a >> b >> c;

    // Llamada a la función. Pasamos raiz1 y raiz2 para que sean modificadas.
    resolvente(a, b, c, raiz1, raiz2);

    cout << "Raiz 1: " << raiz1 << endl;
    cout << "Raiz 2: " << raiz2 << endl;

    return 0;
}

// Definición
void resolvente(int a, int b, int c, float &x1, float &x2) {
    float discriminante = b*b - 4*a*c;
    if (discriminante < 0) {
        // En este ejemplo, si no hay raíces reales, asignamos valores especiales
        x1 = x2 = 0; // o podríamos usar NaN, pero por simplicidad 0
        cout << "No hay raíces reales" << endl;
    } else {
        x1 = (-b + sqrt(discriminante)) / (2*a);
        x2 = (-b - sqrt(discriminante)) / (2*a);
    }
}
