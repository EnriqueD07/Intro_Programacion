#include <iostream>
using namespace std;
int main()
{
    /*Solucion ejercicio 2
    Solucione los errores del programa que pide que ingrese dos n�meros enteros: el ancho y
    el alto de un rect�ngulo, y luego muestra su �rea.*/
    int width,height;
    cout << "Enter rectangle width and height"s << endl;
    cin >> width >> height;
    cout << "Rectangle area is "s << width * height << endl;
    return 0;
}
