/*Solucion ejercicio 2
    El programa deber�a leer dos n�meros enteros, x e y , e imprimir "Your answer: " y la
    seguido de la suma de los n�meros x + y + z , donde z = 1 , en una l�nea. Pero hay
    errores de compilaci�n en el c�digo. Corr�jalos uno por uno y vea c�mo cambian los
    mensajes de error.*/

#include <iostream>
using namespace std;  //quitamos el bloque de comentarios
int main() //corregimos ma --> main
{
 int x,y,z; //agregamos las variables que faltan
 cout<<"introduce x y "<<endl;
 cin >> x>>y; //cambiamos la , por >>
 z = 1;
 cout << "Your answer: "<<x+y+z<<endl;; //cambiamos las comillas simples por dobles, agregamos la operaci�n
 return 0;
}
