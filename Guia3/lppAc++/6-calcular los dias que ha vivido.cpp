#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<string>

using namespace std;

int main(){
    setlocale(LC_CTYPE,"");
    float ano,mes,semana,dias;
    cout<<"para calcular cauntos dias a vivido"<<endl;
    cout<<"ingrese su edad";
        cin>>ano;
        mes=ano*12;
        semana=mes*4.34524;
        dias=semana*7;
    cout<<"usted a vivido "<<ano<<" años\n"<<mes<<" meses\n"<<semana<<" semanas\n"<<dias<<" dias\n";

}