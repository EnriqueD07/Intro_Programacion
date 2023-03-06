/*
SOLUCION EJERCICIO 14
Martha perdió a su gato Marqués. Un transeúnte le dijo que vio un gato similar afuera de
una de las tres casas cerca de la oficina de correos. Cuando se le pregunta en cuál de las
casas vio al Marqués, un transeúnte puede recordar el color de la casa, así como el
número de pisos en la casa. Una situación posible es cuando un transeúnte ha olvidado
parte de la información o toda ella.
Escribe un programa que, basado en el testimonio de un transeúnte, ayude a Martha a
decidir a cuál de las tres casas entrar.
*/
#include <iostream>
using namespace std;
int main()
{
    int piso1,piso2,piso3,piso;
    string casa1,casa2,casa3,casa;
    cin>>casa1>>piso1;
    cin>>casa2>>piso2;
    cin>>casa3>>piso3;
    cin>>casa>>piso; //Testimonio del transeunte
    int i=0;
    if(casa1==casa&&piso1==piso)
    {
        cout<<1<<endl;
    }else if(casa2==casa&&piso2==piso)
    {
        cout<<2<<endl;
    }else if(casa3==casa&&piso3==piso)
    {
        cout<<3<<endl;
    }else{
    if(casa1==casa||piso1==piso)
    {
        cout<<1<<endl;
    }if(casa2==casa||piso2==piso)
    {
        cout<<2<<endl;
    }
    if(casa3==casa||piso3==piso)
    {
        cout<<3<<endl;
    }}
    return 0;
}
