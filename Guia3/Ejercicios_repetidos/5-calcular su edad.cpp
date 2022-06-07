#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

main(){
    int n1,n2,res;
    setlocale(LC_CTYPE,"");
    cout<<"para calcular su edad es necesario los siguientes datos"<<endl;
    cout<<"ingrese su fecha de nacimiento";
        cin>>n1;
    cout<<"ingrese el año vijente";
        cin>>n2;
    res=n2-n1;
    cout<<"usted tiene "<<res<<"años";

}