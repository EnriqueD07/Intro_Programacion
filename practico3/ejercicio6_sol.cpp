/*
Usando la solucion del ejercicio 5: imprimir todos los números entre los dos dados.
Modifique lo pero ahora el primer número puede ser mayor que el segundo. En este caso,
debe imprimir los números en orden inverso.
*/

#include <iostream>

using namespace std;
int main()
{
    //solucion ejercicio 6
    int a,b;
    cin>>a>>b;
    if (a<b)
    {
    for (int i=a;i<=b;++i)
    {
        cout<<i<<endl;
    }}
    else if (a>b)
    {
    for (int i=a;i>=b;--i)
    {
        cout<<i<<endl;
    }}
    return 0;
}
