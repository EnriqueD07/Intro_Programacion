#include <iostream>
using namespace std;
int main()
{
    /*Solucion ejercicio 2
    Escriba un programa que lea dos n�meros double e imprima su cociente.*/
    double a,b,c;
    cout<<"Ingresar dos numeros"<<endl;
    cin>>a>>b;
    c=a/b;
    if (b!=0)
    {
        cout<<c<<endl;
    }
    else
    {
        cout<<"infinito"<<endl;
    }
    return 0;
}
