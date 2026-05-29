#include <iostream>
#include <string>
using namespace std;

void leerCantidad(int &n);
bool validarPregunta(string pregunta);
void registrarPreguntas(string preguntas[], int n);
void mostrarPreguntas(string preguntas[], int n);

int main() {
    int n;
    leerCantidad(n);
    string preguntas[n];
    registrarPreguntas(preguntas, n);
    mostrarPreguntas(preguntas, n);

    return 0;
}

void leerCantidad(int &n) {

    cout << "Ingrese la cantidad de preguntas: ";
    cin >> n;

    cin.ignore();
}

bool validarPregunta(string pregunta) {

    if(pregunta.length() == 0) {
        return false;
    }

    if(pregunta.at(0) == ' ') {
        return false;
    }

    if(pregunta.at(pregunta.length()-1) == ' ') {
        return false;
    }

    return true;
}

void registrarPreguntas(string preguntas[], int n) {
    string pregunta;
    for(int i = 0; i < n; i++) {
        do {
            cout << "\nIngrese la pregunta " << i + 1 << ": ";
            getline(cin, pregunta);
            if(!validarPregunta(pregunta)) {
                cout << "Error: La pregunta no puede estar vacia " << "ni contener espacios al inicio o final." << endl;
            }

        } while(!validarPregunta(pregunta));
        preguntas[i] = pregunta;
    }
}

void mostrarPreguntas(string preguntas[], int n) {
    cout << "\n===== PREGUNTAS REGISTRADAS =====" << endl;
    for(int i = 0; i < n; i++) {
        cout << i + 1 << ". " << preguntas[i] << endl;
    }
}
