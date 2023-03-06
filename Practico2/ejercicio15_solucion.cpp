/*
SOLUCION EJERCICIO 15
Se te da una letra, un tipo de dato char . Se tiene que encontrar si el caracter dado esta
en mayúsculas, esta en minúsculas o un carácter no alfabético.
65-90
97-122
*/
#include <iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    int n =char(a);
    if ((n>=65)&&(n<=90))
    {
        cout<<"el caracter esta en mayusculas";
    }else if ((n>=97)&&(n<=122))
    {
        cout<<"el caracter esta en minusculas";
    }
    else{
        cout<<"No es un caracter";
    }
    return 0;
}
