#include<iostream>
using namespace std;
main (){
    int Cliente, escobas=0,recogedores=0,aromatizantes=0,p_escoba,p_recogedor,p_aromatizante,descuento_1,descuento_2,descuento_3,descuento_4,total;
    cout << "ingrese la cantidad de escobas que quiera comprar ";
    cin >> escobas;
    cout << "ingrese la cantidad de recogedores que quiera comprar ";
    cin >> recogedores;
    cout << "ingrese la cantidad de aromatizantes que quiera comprar ";
    cin >> aromatizantes;
    cout<<"ingrese el tipo de cliente que es";
    cin >> Cliente;
    p_escoba=escobas*9000;
    p_recogedor=recogedores*4000;
    p_aromatizante=aromatizantes*6000;
    total=p_escoba+p_recogedor+p_aromatizante;
    cout<<"El total sin descuento a pagar es de "<<total<<endl;
    switch(Cliente){
        case 1:
            descuento_1=total*0.05;
            total=total-descuento_1;
            cout<<"el total a pagar es de "<<total;
        break;
        case 2:
            descuento_2=total*0.08;
            total=total-descuento_2;
            cout<<"el total a pagar es de "<<total;
        break;
        case 3:
            descuento_3=total*0.12;
            total=total-descuento_3;
            cout<<"el total a pagar es de "<<total;
        break;
        case 4:
            descuento_4=total*0.15;
            total=total-descuento_4;
            cout<<"el total a pagar es de "<<total;
        break;
        default:
            cout<<"el cliente no existe";
        break;
    }
}