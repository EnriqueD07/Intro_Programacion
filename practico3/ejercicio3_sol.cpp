/*
Escriba un código que compare las mitades de una naranja. El programa lee dos números
reales: los tamaños de las mitades. Si los números son iguales, el programa debería
mostrar: La naranja se divide en dos partes iguales . Si el primer número es mayor,
haga que el programa muestre: Cortar X de la primera parte , donde X es la
diferencia entre los pedazos de la naranja (Note que esta diferencia debe ser positiva). Si
el segundo número es mayor, generar Cortar X de la segunda parte . Reemplace X con
la diferencia de tamaño.
*/
#include <iostream>
using namespace std;

int main()
{
    //Solucion ejercicio 3
    float a,b,dif;
    cin>>a>>b;
    if (a==b)
    {
        cout<<"La naranja se divide en dos partes iguales."<<endl;
    }else if (a>b)
    {
        dif=a-b;
        cout<<"Cortar "<<dif<<" de la primera parte"<<endl;
    }else if (b>a)
    {
        dif=b-a;
        cout<<"Cortar "<<dif<<" de la segunda parte"<<endl;
    }
    else{
    cout<<"?"<<endl;    
    }
    return 0;
}
