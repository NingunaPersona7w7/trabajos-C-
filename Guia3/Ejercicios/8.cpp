#include<iostream>
using namespace std;
main (){
    int sum_final1,des_total1,sum_final,brocha_p, rodillo_p, sellador_p,broca, rodillo, sellador, des1,des2,des3,des_total,contado,sum,sum_t;
    cout<<"Calcular el descuento de tres dos productos, tendra un descuento del 7 prociento si paga a contado"<<endl;
    cout<<"La brocha cuesta 10000"<<endl;
    cout<<"El rodillo cuesta 15000"<<endl;
    cout<<"El sellador cuesta 12000"<<endl;
    cout<<"cuantas brochas quiere comprar: ";
    cin>>broca;
    cout<<"Cunatos rodillos quiere comprar: ";
    cin>>rodillo;
    cout<<"cunatos selladores quiere comprar: ";
    cin>>sellador;
    cout<<"si su modo de pago sera a contado, ponga 1, si sera a credito, ponga 2"<<endl;
    cin>>contado;
    des1=broca*0.20;
    des2=rodillo*0.15;  
    brocha_p=1000*broca;
    rodillo_p=1500*rodillo;
    sellador_p=1200*sellador;
    sum_t=brocha_p+rodillo_p+sellador_p;
    if (contado==1){
        des3=sum_t*0.07;
        des_total1= des1+des2+des3;
        sum_final1=sum_t-des_total1;
        cout<<"El total a pagar es "<<sum_final1<<endl;
    }
    else if (contado==2){
        des_total= des1+des2;
        sum_final=sum_t-des_total;
        cout<<"El total a pagar es "<<sum_final<<endl;
    }
    else{
        cout<<"Error, no se ha ingresado un valor valido"<<endl;
    }
}