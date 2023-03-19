/*
SOLUCION EJERCICIO 9
Escriba un programa que lea dos enteros no negativos separados por un espacio. El
programa debe calcular su suma S y generar el producto de S por el número de dígitos en
la notación decimal S.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num1,num2,S,digitos;
    float prod;
    cin>>num1>>num2;
    S=num1+num2; //sumamos los numeros
    string dig = to_string(S);  // Convertimos la suma en una cadena
    digitos=dig.size();  //Calculamos los caracteres de la cadena dig
    prod=digitos*S; //multiplicamos el numero de caracteres por la suma
    cout<<prod;
    return 0;
}
