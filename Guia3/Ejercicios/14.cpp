#include<iostream>
using namespace std;
main(){
    int n1,n2, op ,suma,restar,multiplicacion,division;
    cout<<"elija si quiere sumar restar multiplicar o dividir"<<endl;
    cout<<"ingrese el primer nuermo que quiera operar";
    cin>>n1;
    cout<<"ingrese el segundo nuermo que quiera operar";
    cin>>n2;
    cout<<"1. sumar"<<endl;
    cout<<"2. restar"<<endl;
    cout<<"3. divir"<<endl;
    cout<<"4. multiplicar"<<endl;
    cin>>op;
    switch(op){
        case 1:
            suma=n1+n2;
            cout<<"la suma es "<<suma;
        break;
        case 2:
            restar=n1-n2;
            cout<<"la resta es "<<restar;
        break;
        case 3:
            division=n1/n2;
            cout<<"la division es "<<division;
        break;
        case 4:
            multiplicacion=n1*n2;
            cout<<"la multiplicacion es "<<multiplicacion;
        break;
        default:
            cout<<"no se puede realizar la operacion";
        break;

    }


}