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

/*
edad,aexperiencia 
input edad
input aexperiencia

if edad>=18

if aexperiencia >=5
print director senior
else if aexperiencia>=3
print director de proyecto
else 
print coordinador de proyecto

else 
print No cuenta con la edad necesaria para el puesto

*/
#include <iostream>
using namespace std;
int main()
{
    int edad,aexperiencia;  // declaramos las variables edad y aexperiencia aexperiencia son los años de experiencia 
    cin>>edad>>aexperiencia;    //Introducimos las variables edad y experiencia
    if (edad>=18) //Si la edad es mayor o igual a 18, se ejecuta el codigo
    {
        if (aexperiencia>=5)    //Si la experiencia es mayor o igual 5, se ejecuta el siguiente codigo
        {
            cout<<"director senior";     //Muestra en consola el texto entre ""
        } else if (aexperiencia>=3) //Si no se cumple la condición anterior y la experiencia es mayor o igual a 3, se ejecuta el siguiente codigo
        {
            cout<<"director de proyecto";   //Muestra en consola el texto entre ""
        } else{             //Si no se cumple la condicion anterior se ejectuta el siguiente codigo
            cout<<"coordinador de proyecto";    //Muestra en consola el texto entre ""
        }
    }
    else {      //si no se cumple nada de lo anterior, se ejecuta el siguiente codigo
        cout<<"No cuenta con la edad necesaria para el puesto";     //Muestra en consola el texto entre ""
    }
    return 0;
}
