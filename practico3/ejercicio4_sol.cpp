/*
Aquí está el código del juego. El jugador debe ingresar un número mientras intenta
adivinarlo. La respuesta correcta es 5. Si se adivina el número 5, el programa muestra
You are right! . Si el usuario comete un error, el programa muestra Guess the number:
.
Pero hay un error en el código, por lo que el programa no funcionará correctamente.
Encuentre el error y corríjalo.
*/

//solucion ejercicio 4
#include <iostream>
#include <string>
using namespace std;
int main()
{
 int a = 5;
 int b;
 do 
 {
    cout << "Guess the number: "s << endl;
    cin >> b;
 } while (a != b); //falta un !
 cout << "You are right!"s << endl;
}
