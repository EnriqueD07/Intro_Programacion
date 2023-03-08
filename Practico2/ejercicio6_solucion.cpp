/*
SOLUCION Ejercicio 6
Escriba un programa que lea el nombre y el apellido separados por un espacio y genere el
nombre completo en el formato <Apellido> , <Nombre> . Utilice el operador de suma para
concatenar (unir) partes de cadenas en una sola cadena antes de generarlas, o
imprímalas individualmente en el orden deseado.
*/
#include <iostream>
using namespace std;
int main()
{
 string Apellido,Nombre;
 cin>>Apellido >> Nombre;
 cout<<Apellido +", "+ Nombre;
 return 0;
}
