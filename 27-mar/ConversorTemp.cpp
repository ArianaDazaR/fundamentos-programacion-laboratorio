#include <iostream>
using namespace std;

int main () {

        float C, resultado;
        int escala;

        cout << "Conversor de Temperatura: Celsius a Fahrenheit/Kelvin/Rankine\n";

        cout << "Grados Celsius:";
        cin >> C;

        cout << "\nSeleccione la escala a la que desea transformar:\n";
        cout << "1. Fahrenheit\n";
        cout << "2. Kelvin\n";
        cout << "3. Rankine\n";
        cin >> escala;

        switch (escala) {
            case 1:
                resultado = (C * 9/5) + 32;
                cout << "\nResulado: " << resultado << " grados faherenheit\n";
                break;
            case 2:
                resultado = C + 273.15;
                cout << "\nResulado: " << resultado << " grados Kelvin\n";
                break;
            case 3:
                resultado = (C + 273.15) * 9/5;
                cout << "\nResulado: " << resultado << " grados Rankine\n";
                break;
            default:
                cout << "\nERROR: Verifique la opcion ingresada\n";
        }

return 0;
}
