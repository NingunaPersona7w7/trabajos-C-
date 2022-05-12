#include <iostream>

using namespace std;

int main(){
    int base, altura,res;
    cout<< "ingrese datos para caluclar el premimetro de un rectangulo"<<endl;
    cout<<"ingrese base"<<endl;
    cin>>base;
    cout<<"ingrese altura";
    cin>>altura;
    res = 2*(base+altura); 
    cout<<"El perimetro de un rectangulo es"<<endl<<res;

}