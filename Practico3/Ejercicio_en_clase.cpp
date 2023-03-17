#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    i=2;
    string answer="Es Primo";
    cin>>n;
    do
    {
        if(n<=0){
            cout<<"Introducir un numero positivo"<<endl;
            cin>>n;
        }
        j=n%i;
        if (j!=0)
        {
            ++i;
        }else{
           answer="No es primo";
           break;
        }
    }while (i<= n/2);
    cout<<answer;
    return 0;
}
