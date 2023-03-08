/*
SOLUCION EJERCICIO 8
Lea cinco palabras de la entrada estándar e imprima el primer caracter de cada palabra
de entrada. Una palabra es una secuencia de caracteres como letras, números, signos de
puntuación. Las palabras están separadas por un solo espacio.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string p1,p2,p3,p4,p5;
    cout<<"Ingresar 5 palabras en una linea"<<endl;
    cin>>p1>>p2>>p3>>p4>>p5;
    char ch1 = p1[0];
    char ch2 = p2[0];
    char ch3 = p3[0];
    char ch4 = p4[0];
    char ch5 = p5[0];
    cout<<ch1<<ch2<<ch3<<ch4<<ch5<<endl;

    return 0;
}
