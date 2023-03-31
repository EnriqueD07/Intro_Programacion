#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int a,b,c;
    float raiz1,raiz2;
    cin>>a>>b>>c;
    if ((a!=0)&&(b!=0)&&(c!=0))
    {
        raiz1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
        raiz2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
    }
    cout<<raiz1<<" "<<raiz2;
    return 0;
}
