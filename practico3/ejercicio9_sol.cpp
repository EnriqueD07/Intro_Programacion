#include <iostream>
using namespace std;
int main() {
    bool nom;
    cout<<"Ingresar 10 valores:"<<endl;
    for (int i=1 ; i<=10 ; i++)
    {
        cin>>nom;
        if (nom==1)
        {
            cout<<"om nom nom :P"<<endl;
        }
        if (nom==0)
        {
            cout<<"no cake :("<<endl;
        break;
        }
    }
 return 0;
}
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
