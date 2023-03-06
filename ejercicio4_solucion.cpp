/*Solucion ejercicio 2
    El programa debería leer dos números enteros, x e y , e imprimir "Your answer: " y la
    seguido de la suma de los números x + y + z , donde z = 1 , en una línea. Pero hay
    errores de compilación en el código. Corríjalos uno por uno y vea cómo cambian los
    mensajes de error.*/

#include <iostream>
using namespace std;  //quitamos el bloque de comentarios
int main() //corregimos ma --> main
{
 int x,y,z; //agregamos las variables que faltan
 cout<<"introduce x y "<<endl;
 cin >> x>>y; //cambiamos la , por >>
 z = 1;
 cout << "Your answer: "<<x+y+z<<endl;; //cambiamos las comillas simples por dobles, agregamos la operación
 return 0;
}
