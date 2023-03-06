/*
SOLUCION EJERCICIO 16
Suponga que conoce la edad y los años de experiencia de un candidato y desea
encontrar el puesto de mayor jerarquía al que puede postularse. Tienes la siguiente
información:
Los puestos disponibles son los de coordinador de proyecto , director de
proyecto y director de proyecto senior .
Un candidato no puede tener menos de dieciocho años.
No se requiere experiencia previa para un coordinador de proyecto . Sin embargo,
un director de proyecto debe tener al menos tres años de experiencia y un
director senior debe tener al menos cinco años de experiencia.
*/
#include <iostream>
using namespace std;
int main()
{
    int edad,aexperiencia;
    cin>>edad>>aexperiencia;
    if (edad>=18)
    {
        if (aexperiencia>=5)
        {
            cout<<"director senior";
        } else if (aexperiencia>=3)
        {
            cout<<"director de proyecto";
        } else{
            cout<<"coordinador de proyecto";
        }
    }
    else {
        cout<<"No cuenta con la edad necesaria para el puesto";
    }
    return 0;
}
