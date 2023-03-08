/*
SOLUCION EJERCICIO 7
Escriba un programa que lea los títulos de tres libros, uno por línea, y los imprima en
orden inverso, también uno por línea. El título de un libro puede tener más de una palabra,
es decir el inicio del titulo de un nuevo libre no esta separado por espacios si no por una
nueva linea.
*/
#include <iostream>
using namespace std;
int main()
{
 string Libro1,Libro2,Libro3;
 cout<<"Nombre 3 libros"<<endl;
 getline(cin, Libro1);
 getline(cin, Libro2);
 getline(cin, Libro3);
 cout<<Libro3 << endl << Libro2 << endl << Libro1;
 return 0;
}
