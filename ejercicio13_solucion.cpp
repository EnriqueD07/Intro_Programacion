/*
SOLUCION EJERCICIO 13
En anteriores ejercicios, se escribi� un c�digo de programa que: lee un n�mero � el
n�mero de documentos; muestra cu�ntos documentos encontrados: <n�mero de
documentos> documentos encontrados.
El programa funciona, pero la palabra "documento" siempre est� en plural, por ejemplo,
se encontraron 1 documentos . Edite el c�digo. Si la entrada es 0, deje que el programa
genere No se encontraron documentos , si es 1: Se encontr� un documento . En todos los
dem�s casos, el programa debe generar <n�mero de documentos> documentos
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
        cout<<"Se encontr� un documento"<<endl;
    }else {
    cout<<doc<<endl;
    }
    return 0;
}
