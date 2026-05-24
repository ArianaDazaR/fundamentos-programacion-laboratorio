#include <iostream>
using namespace std;

void LeerDatos(int &dd, int &mm, int &aa);
int diasEnMes(int mm, int aa);

const char* DetMM(int mm);

void LITERAL(int dd, const char* MMseleccionado, int aa);

int main() {
    int dd, mm, aa;
    LeerDatos(dd, mm, aa);
    const char* MMseleccionado = DetMM(mm);
    LITERAL(dd, MMseleccionado, aa);
    return 0;
}

int diasEnMes(int mm, int aa) {
    switch (mm) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
            break;
        case 4: case 6: case 9: case 11:
            return 30;
            break;
        case 2:
            if ((aa % 4 == 0 && aa % 100 != 0) || (aa % 400 == 0)) {
                return 29;
                break;
            } else {
                return 28;
                break;
            }
        default:
            return 0;
    }
}


void LeerDatos(int &dd, int &mm, int &aa) {
    char sep1, sep2;
    bool fechaValida = false;

    cout << "Ingrese una fecha (Formato: dd/mm/aaaa, entre 2000 y 2050): ";

    do {
        cin >> dd >> sep1 >> mm >> sep2 >> aa;

        if (sep1 != '/' || sep2 != '/') {
            cout << "Formato invalido (use /). Intente de nuevo: ";
            continue;
        }

        if (aa < 00 || aa > 50) {
            cout << "Año fuera de rango (2000-2050). Intente de nuevo: ";
            continue;
        }

        if (mm < 1 || mm > 12) {
            cout << "Mes invalido. Intente de nuevo: ";
            continue;
        }

        int maxDias = diasEnMes(mm, aa);
        if (dd < 1 || dd > maxDias) {
            cout << "Dia invalido para el mes " << mm << " y año " << aa << ". Intente de nuevo: ";
            continue;
        }

        fechaValida = true;

    } while (!fechaValida);
}

const char* DetMM(int mm) {
    switch (mm) {
        case 1:
            return "Enero";
            break;
        case 2:
            return "Febrero";
            break;
        case 3:
            return "Marzo";
            break;
        case 4:
            return "Abril";
            break;
        case 5:
            return "Mayo";
            break;
        case 6:
            return "Junio";
            break;
        case 7:
            return "Julio";
            break;
        case 8:
            return "Agosto";
            break;
        case 9:
            return "Septiembre";
            break;
        case 10:
            return "Octubre";
            break;
        case 11:
            return "Noviembre";
            break;
        case 12:
            return "Diciembre";
            break;
        default:
            return "Mes invalido";
    }
}

void LITERAL(int dd, const char* MMseleccionado, int aa) {
    if (aa < 10) {
        cout << "\nFecha literal: " << dd << " de " << MMseleccionado << " de 200" << aa << endl;
    } else {
        cout << "\nFecha literal: " << dd << " de " << MMseleccionado << " de 20" << aa << endl;
    }
}
