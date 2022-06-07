#include<iostream>
using namespace std;
main(){
    int N;
    cout<<" Imprimir los numeros pares desde N en forma descendente hasta 2. "<<endl;
    cout<<" ingrese la cantidad de que quiera imprimir "<<endl;
    cin>>N;
    for (int i = N; i > 0; i-=2){
        cout<<i<<endl;
    }

}