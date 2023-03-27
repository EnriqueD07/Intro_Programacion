//solucion ejercicio 8
#include <iostream>
#include <string>
using namespace std;
int main()
{
 string query;
 getline(cin, query);
 char ch;
 int a;
 int caract = query.size();
 cout<<"[";
 for (int i=0; i<=caract; ++i)
 {
 	ch=query [i];
 	if(ch !=' ')
 	{
 		cout<<ch;
	}
	else if (ch==' ')
	{
		cout<<"]"<<endl<<"[";
	}
 }
 cout<<"]";
 return 0;
}

/*
Ahora escriba las palabras encerradas entre corchetes. Por ejemplo, si la entrada fue un
green parrot , la salida debería ser:
Puedes reutilizar el algoritmo del problema anterior. Allí ibas a lo largo de la línea y
verificaste si el caracter era un espacio. Si el carácter no era un espacio, simplemente lo
saltabas y seguía adelante. Ahora este caso tendrá que ser procesado.
Cree una variable de cadena, word , en la que agregará carácter por carácter de la
cadena original, si este carácter no es un espacio. Si se encuentra un espacio, muestre
[ , la palabra acumulada y ] y asigne una cadena vacía a la variable, word , para reiniciar
el proceso con la siguiente palabra de la cadena.
Restricciones
Lo mismo que en el ejercicio anterior:
Hay un espacio entre las palabras.
Una línea comienza con una palabra y termina con el final de una línea.
Hay exactamente una línea en la consulta.
*/
