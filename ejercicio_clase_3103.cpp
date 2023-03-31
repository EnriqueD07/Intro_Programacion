#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    double a,b,c, raiz1,raiz2;
    cin>>a>>b>>c;
    if ((a!=0)||(b!=0)||(c!=0))
    {
        raiz1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
        raiz2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
    }
    if (raiz1==raiz2)
    {
    cout<<raiz1;
    }
    else
    {
    cout<<raiz1<<" "<<raiz2;
    }
    return 0;
}


//////////////////////////////////////////////////////////////////////

/*
Entender el probelma
identificar entradas y salidas
pruebas
pseudocodigo
INPUT A,B,C
    IF A==0 AND B!=0
    X= -C/B
D= B^2 - 4AC
IF D >= 0
    X1,X2 = (-B +- SQRT D)/2A
*/

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    double a,b,c, x1,x2,disc;
    cin>>a>>b>>c;
    disc=pow(b,2)-(4*a*c);
    if ((a<=0)&&(b!=0))
    {
        x1=x2;
        x1=-(c/b);
        cout<<x1<<endl;
    }
    else if(disc>=0)
    {
        x1=(-b+sqrt(disc))/(2*a);
        x2=(-b-sqrt(disc))/(2*a);
        cout<< x1<<" "<<x2<<endl;
    }
    return 0;
}
