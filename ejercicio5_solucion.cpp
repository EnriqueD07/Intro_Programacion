/*
SOLUCION EJERCICIO 5
No todos los errores se pueden detectar durante la compilaci�n del programa. Algunos
de ellos sobreviven hasta el momento de su deployment (Lanzar a produccion).
Aqu� est� el c�digo de un programa que debe leer n�meros del tipo doble y mostrar su suma. Hay
un error en el c�digo. Corrijalo.
*/

#include <iostream>
using namespace std;
int main()
{
 double x, y; //cambiamos int por double
 cin >> x >> y;
 cout << x + y;
 return 0;
}
