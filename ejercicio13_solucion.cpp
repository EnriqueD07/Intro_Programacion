/*
SOLUCION EJERCICIO 13
En anteriores ejercicios, se escribió un código de programa que: lee un número — el
número de documentos; muestra cuántos documentos encontrados: <número de
documentos> documentos encontrados.
El programa funciona, pero la palabra "documento" siempre está en plural, por ejemplo,
se encontraron 1 documentos . Edite el código. Si la entrada es 0, deje que el programa
genere No se encontraron documentos , si es 1: Se encontró un documento . En todos los
demás casos, el programa debe generar <número de documentos> documentos
encontrados.
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    string doc;
    cin>>num;
    string numero=to_string(num);
    doc=numero+" documentos encontrados"s;
    if (num==0)
    {
        cout<<"No se han encontrado documentos"<<endl;
    }else if (num==1)
    {
        cout<<"Se encontró un documento"<<endl;
    }else {
    cout<<doc<<endl;
    }
    return 0;
}
