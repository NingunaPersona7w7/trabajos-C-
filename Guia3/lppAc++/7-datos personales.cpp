#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
using namespace std;

int main(){
    string n1,n2,n3;
    setlocale(LC_CTYPE,"");
    cout<<"ingreses sus datos"<<endl;
    cout<<"ingrese sus nombres\n";
        cin>>n1;
    cout<<"ingrese su numero\n";
        cin>>n2;
    cout<<"ingrese su direccion\n";
        cin>>n3;
    cout<<"binevenido "<<n1<<" con numero "<<n2<<" y direccion "<<n3;
}