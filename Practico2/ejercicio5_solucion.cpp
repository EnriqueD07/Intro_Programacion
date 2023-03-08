/*
SOLUCION EJERCICIO 5
No todos los errores se pueden detectar durante la compilación del programa. Algunos
de ellos sobreviven hasta el momento de su deployment (Lanzar a produccion).
Aquí está el código de un programa que debe leer números del tipo doble y mostrar su suma. Hay
un error en el código. Corrijalo.
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
