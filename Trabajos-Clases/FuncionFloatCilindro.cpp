#include <iostream>
#include <math.h>
#include <iomanip>

float vol_cilindro (float r, float a);
using namespace std;
int main () {

     float radio, altura, volumen;
     cout << "Ingrese el radio: ";
     cin >> radio;
     cout << "Ingrese la altura: ";
     cin >> altura;

     volumen = vol_cilindro (radio, altura);
     cout << fixed << setprecision(3) << "El volumen es: " << volumen;

    return 0;
}

float vol_cilindro(float r, float a) {

    float v= M_PI*r*r*a;

    return v;
}
