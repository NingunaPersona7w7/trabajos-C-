#include<iostream>
using namespace std;
int main (){
    int nota1,nota2,nota3;
    cout<<"Programa para saber el mayor entre tres notas"<<endl;
    cout<<"Ingrese la nota 1: ";
    cin>>nota1;
    cout<<"Ingrese la nota 2: ";
    cin>>nota2;
    cout<<"Ingrese la nota 3: ";
    cin>>nota3;
    if(nota1>nota2 && nota1>nota3){
        cout<<"la nota mayor es "<<nota1<<endl;
    }
    else if(nota2>nota1 && nota2>nota3){
        cout<<"la nota mayor es "<<nota2<<endl;
    }
    else if(nota3>nota1 && nota3>nota2){
        cout<<"la nota mayor es "<<nota3<<endl;
    }
    else{
        cout<<"Las notas son iguales"<<endl;
    }

    return 0;

}