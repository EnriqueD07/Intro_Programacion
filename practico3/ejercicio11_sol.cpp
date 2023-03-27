/*
Te dan una base y un exponente. Tu tarea es calcular la potencia del número. En donde la
entrada es una sola linea con dos numeros separados por espacios. El primer numero
sera siempre la base y el segundo el exponente.
*/
#include <iostream>
using namespace std;
int main()
{
    int a,b,mult,pot;
    cin>>a>>b;
    if (b>0)
    {
        for (int i=0; i<=b; ++i)
        {
            mult=a*a;
            pot=mult*a;
        }
        cout<<pot;
    }else if (b==0)
    {
        cout<<"1";
    }else if (b<0)
    {
        for (int i=1;i<=(-b);++i)
        {
            mult=a*a;
            pot=mult*a;
        }
        cout<<"1/"<<pot;
    }
    return 0;
