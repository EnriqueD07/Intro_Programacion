/* SOLUCION EJERCICIO 11
Julia perdió a su cachorro Fibo, que recibió su nombre en honor al matemático Fibonacci.
El signo especial de Fibo es que tiene grabado en su collar el código 11235813 . Escriba
un programa que use el código del collar para determinar si pertenece a Fibo.
*/
#include <iostream>
using namespace std;
int main()
{
    int collar;
    cin>>collar;
    if (collar==11235813)
    {
        cout<<"Se encontró Fibonacci";
    }else{
        cout<<"Esto no es de Fibonacci";
    }
    return 0;
}
