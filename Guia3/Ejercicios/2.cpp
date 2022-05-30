#include<iostream>
#include<math.h>

using namespace std;

main(){
    int numero;
    bool estado=true;
    cout<<"Ingrese un nuemro para sabre si es primo";
    cin>>numero;
    for(int i=2; i<=sqrt(numero) && estado; i++){
        if(numero%1==0) estado=false;
    }
    cout<<(estado?"Si es primo":"no es primo")<<endl;
}