#include<iostream>
using namespace std;

float calcularPromedio(float n1, float n2, float n3);
void mostrarResultado(float promedio);

int main()
{
    float n1, n2, n3; //nombres de variables estaban incorrectos
    float promedio; //el tipo de variable es float, no int

    cout<<"Ingrese nota 1: ";
    cin>>n1;

    cout<<"Ingrese nota 2: ";
    cin>>n2;

    cout<<"Ingrese nota 3: ";
    cin>>n3;

    promedio = calcularPromedio(n1, n2, n3); //no se llamaba adecuadamente a la funcion

    mostrarResultado(promedio);

    return 0;
}

float calcularPromedio(float n1, float n2, float n3) //no devolvía nada, no había return
{
    float promedio;

    promedio = (n1 + n2 + n3) / 3; // faltaban parentesis

    cout<<"Promedio calculado: "<<promedio<<endl;

    return promedio;
}

void mostrarResultado(float promedio) {
    if(promedio >= 51){ //no correspondía punto y coma, solo corchete; además
        cout<<"APROBADO"<<endl;
    } else {
        cout<<"REPROBADO"<<endl;
    }
}
