/*
Suponga que tiene un número no negativo y tiene que calcular su factorial. Este numero
es solicitado al usuario con el flujo de entrada cin .
***Restricciones***
El usuario puede equivocarse e introducir un numero negativo! Su codigo debe lidiar con
este caso e indicarle al usuario que esto no es permitido y que lo intente de nuevo.
Si se introduce un numero muy grande el programa debe advertirle al usuario que el
resultado se demorara en ser calculado y pedirle que lo intente de nuevo.

*/
#include <iostream>
using namespace std;
int main()
{
    int a,mult;
    cin>>a;
    int fact=1;
    while (a<0)
    {
        cout<<"No estan permitido numeros negativos, intenta de nuevo"<<endl;
        cin>>a;
    }
    while (a>=14)
    {
        cout<<"El numero a calcular es demasiado grande, intenta de nuevo"<<endl;
        cin>>a;
    }
    if (a>=0)
    {
        for (int i=1; i<=a; ++i)
        {
            mult=a*i;
            fact=mult*fact;
        }
        cout<<fact;
    }
    return 0;
}
