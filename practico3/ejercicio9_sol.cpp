/*
Ejercicio 9
Según una encuesta realizada por Most Accurate Statistics Bureau , los encuestados
hacen un promedio de 10 visitas al refrigerador por noche. Solo una circunstancia puede
detenerlos: Ya se acabo la torta de la heladera .
Escriba un programa que simule las aventuras nocturnas del ciudadano. Puede averiguar
si hay un pastel leyendo el número de cin . Solo tomará dos valores:
1 - todavía hay torta,
0 - se acabó la torta.
Si se encuentra un pastel, imprima la cadena Om-nom-nom :P . Si se acabó el pastel,
escriba Sin pastel :( y finalice el ciclo con una declaración de break . Tambien, debe
ignorarse ingresar más de 10 unidades, ya que el ciudadano promedio ya se ha quedado
sin pastel en este caso.
*/
#include <iostream>
using namespace std;
int main() {
 // Escriba un ciclo for, que realice 10 idas a la heladera
    bool nom;
    for (int i ; i<=10 ; ++i)
    {
        cin>>nom;
        if (nom==1)
        {
        a++
        }
        if (nom==0)
        {
        break;
        }
    }
}
