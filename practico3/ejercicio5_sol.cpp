/*
Escriba una programa que imprima dos números ingresados por el usuario desde el
primero hasta el segundo inclusive. En lugar de un ciclo while , use for .
Restricciones
Los números introducidos son no negativos, es decir, mayores o iguales a 0. El primer
número siempre es menor o igual que el segundo.
*/


#include <iostream>
#include <string>
using namespace std;
int main()
{
    //solucion ejercicio 5
    int a,b;
    cin>>a>>b;
    for (int i=a; ((i>=0)&&(i<=b));++i)
    {
        cout<<i<<endl;
    }
    return 0;
}
