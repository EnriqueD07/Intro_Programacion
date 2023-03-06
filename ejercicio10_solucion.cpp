/*
SOLUCION EJERCICIO 10
Escriba un programa que lea un número (número de documentos) y muestre <número de
documentos> documentos encontrados . Primero, forme una cadena con la respuesta, solo
luego muéstrela en la pantalla en su totalidad.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num;
    string doc;
    cin>>num;
    string numero=to_string(num);
    doc=numero+" documentos encontrados"s;
    cout<<doc;
    return 0;
}
