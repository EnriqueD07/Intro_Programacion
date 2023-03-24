/*
Frente a Zoe hay tres casas de diferentes colores. Se sabe junto a qué color de casa se
vio por última vez a Fluffy . Las casas están numeradas 1, 2 y 3. Determina el número de
la casa con la que necesita hablar sobre su mascota, Fluffy.
*/

#include <iostream>
using namespace std;

int main()
{
    string casa1,casa2,casa3,casa;
    cin>>casa1>>casa2>>casa3>>casa;
    if ((casa1!=casa2)&&(casa2!=casa3)&&(casa1!=casa3))
    {
    if (casa1==casa)
    {
        cout<<"Entra en la casa 1"<<endl;
    }
    else if (casa2==casa)
    {
        cout<<"Entra en la casa 2"<<endl;
    }
    else if (casa3==casa)
    {
        cout<<"Entra en la casa 3"<<endl;
    }
    else
    {
        cout<<"Busca en otro lugar"<<endl;
    }
    }
    else{
        cout<<"No pueden haber casas de colores iguales";
    }
    return 0;
}

