/* SOLUCION EJERCICIO 11
Julia perdi� a su cachorro Fibo, que recibi� su nombre en honor al matem�tico Fibonacci.
El signo especial de Fibo es que tiene grabado en su collar el c�digo 11235813 . Escriba
un programa que use el c�digo del collar para determinar si pertenece a Fibo.
*/
#include <iostream>
using namespace std;
int main()
{
    int collar;
    cin>>collar;
    if (collar==11235813)
    {
        cout<<"Se encontr� Fibonacci";
    }else{
        cout<<"Esto no es de Fibonacci";
    }
    return 0;
}
