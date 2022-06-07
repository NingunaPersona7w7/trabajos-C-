#include<iostream>
using namespace std;
int main (){
    int i, j, op;
    cout<<"Algoritmo para cintar hasta el numero 10"<<endl;
    cout<<"ingrese 1 para contar del uno a dies, ingrese 2 para contar del 1 a diez"<<endl;
    cin>>op;
switch (op)
{
    case 1:
        for (i=1;i<=10;i++)
        {

            cout<<i<<endl;
        }
        break;
    case 2:
            for (j=10;j>=1;j--)
        {
            cout<<j<<endl;
        }
break;

    default:
        cout<<"opcion no valida"<<endl;
        break;
    }
}