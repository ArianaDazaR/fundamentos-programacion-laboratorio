#include <iostream>
using namespace std;

int main () {

        int operacion;
        float a, b, resultado;

        cout << "Calculadora Basica\n";

        cout << "\nIngrese el primer numero: ";
        cin >> a;

        cout << "\nIngrese el segundo numero: ";
        cin >> b;

        cout << "\nSeleccione una operacion:\n";
        cout << "1. Suma\n";
        cout << "2. Resta\n";
        cout << "3. Multiplicacion\n";
        cout << "4. Division\n";
        cin >> operacion;

        switch (operacion) {
            case 1:
                resultado = a+b;
                cout << "\nResulado: \n" << resultado;
                break;
            case 2:
                resultado = a-b;
                cout << "\nResulado: \n" << resultado;
                break;
            case 3:
                resultado = a*b;
                cout << "\nResulado: \n" << resultado;
                break;
            case 4:
                if (b==0) {
                    cout << "\nResultado: Indefinido\n";
                    break;
                } else {
                resultado = a/b;
                cout << "\nResultado: \n" << resultado;
                break;
                }
            default:
                cout << "\nERROR: Verifique la opcion ingresada\n";
        }

return 0;
}
