//Solucion ejercicio 7
#include <iostream>
#include <string>
using namespace std;
int main()
{
 string query;
 getline(cin, query);
 char ch;
 int caract = query.size();
 for (int i=0; i<=caract; ++i)
 {
 	ch=query [i];
 	if (ch==' ')
	{
		cout<<i<<endl;
	}
 }
 cout<<caract<<endl;
 return 0;
}
/*
Para buscar documentos, debe poder dividir el texto en palabras. Inicialmente, lo
haremos de una forma no estandar: escriba su propio algoritmo.
Las palabras están separadas por espacios. Se garantiza exactamente un espacio entre
palabras. La línea comienza con una palabra (no un espacio) y termina con el final de la
línea ( \n ). Solo se ingresa una línea, el final de la línea también es uno, y alguna palabra
siempre termina antes.
Lea toda la línea desde la terminal hasta una nueva línea. Para cada palabra, imprima el
índice después del último carácter de la palabra. Recuerde, la indexación comienza
desde cero.
Restricciones
Hay un espacio entre las palabras. No hay espacios al principio o al final de la cadena.
Hay exactamente una línea en la consulta.
*/
