/*
SOLUCION EJERCICIO 12
Compras un smartphone en una tienda con un sistema de descuento flexible. Si el costo
original del tel�fono es m�s de A bolivianos, se establece un descuento del X por ciento.
Si el costo original del tel�fono inteligente es m�s de B bolivianos, el descuento ser� Y
por ciento.
El programa recibe cinco n�meros reales como entrada: N, A, B, X, Y .
En donde, N - el costo inicial del producto. El n�mero A es menor que el n�mero B .
Imprima el costo de comprar un tel�fono, incluido el descuento.
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
