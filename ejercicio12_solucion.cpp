/*
SOLUCION EJERCICIO 12
Compras un smartphone en una tienda con un sistema de descuento flexible. Si el costo
original del teléfono es más de A bolivianos, se establece un descuento del X por ciento.
Si el costo original del teléfono inteligente es más de B bolivianos, el descuento será Y
por ciento.
El programa recibe cinco números reales como entrada: N, A, B, X, Y .
En donde, N - el costo inicial del producto. El número A es menor que el número B .
Imprima el costo de comprar un teléfono, incluido el descuento.
/*/
#include <iostream>
using namespace std;
int main()
{
    double N,A,B,X,Y;
    cin>>N>>A>>B>>X>>Y;
    if (N>B)
    {
        cout<<N-(N*Y/100)<<endl;
    }else if (N>A)
    {
        cout<<N-(N*X/100)<<endl;
    }else{
    cout<<N<<endl;
    }
    return 0;
}
