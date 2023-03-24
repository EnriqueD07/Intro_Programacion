/*
Escriba un programa que pruebe la capacidad del usuario para sumar números enteros.
En su entrada se introducen tres enteros: dos términos y una suma. Si la suma ingresada
por el usuario es incorrecta, imprima la cadena “Error. The sum of 5 and 3 is 9” . En
lugar de X, Y y Z, se deben mostrar los dos términos y su suma. De lo contrario, no emita
nada.
*/

#include <iostream>
using namespace std;

int main()
{
  //solucion ejercicio 2
    int x,y,z;
    cin>>x>>y>>z;
    if (((x<=1000000)&&(x>=-(1000000)))&&((y<=1000000)&&(y>=-(1000000)))&&((z<=1000000)&&(z>=-(1000000))))
    {
        if (z!=(x+y))
        {
            cout<<"Error. The sum of "<<x<<" and "<<y<<" is "<<x+y<<endl;
        }
    }
    return 0;
}
