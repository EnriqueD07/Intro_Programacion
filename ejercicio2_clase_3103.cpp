
/*
    Realizar un programa que imprima todos los numeros pares positivos
    entre A y B.
    Entradas: A B
    Salida numeros pares
    PRUEBAS
    
    ENTRADA 4 9
    SALIDA 4 6 8
    
    ENTRADA 1 9
    SALIDA 2 4 6 8
    
    pseudocodigo
    INPUT A, B
    IF A<=B AND A>=1 AND B<=30000
        
    
*/
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int A,B;
    cin >>A>>B;
    if (A<=B && A>=1 && B<=30000)
    {
        for(int i=A; i<=B; i=i+2)
        {
            if (A%2==0)
            {
                cout<<i<<" "<<endl;
            } else
            {
                A++;
                i++;
                cout<<i<<" "<<endl;
            }
        }
    }
    return 0;
}
