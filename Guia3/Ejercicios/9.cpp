#include<iostream>
using namespace std;
void bisiesto(){
    int mes;
    cout<<"Ingrese el numero del mes del cual quiera saber cuantos dias habiles tiene en un año bisiesto: ";
    cin>>mes;
    switch(mes){
        case 1:
            cout<<"Enero tiene 19 dias laborales";
        break;

        case 2:
            cout<<"Febrero tiene 20 dias laborales";
        break;
        
        case 3: 
            cout<<"Marzo tiene 22 dias laborales";
        break;
        
        case 4:
            cout<<"Abril tiene 20 dias laborales";
        break;
        case 5:
            cout<<"mayo tiene 19 dias laborales";
        break;
        case 6:
            cout<<"junio tiene 20 dias laborales";
        break;
        case 7:
            cout<<"julio tiene 20 dias laborales";
        break;
        case 8:
            cout<<"agosto tiene 21 dias laborales";
        break;
        case 9:
            cout<<"septiembre tiene 22 dias laborales";
        break;
        case 10:
            cout<<"octubre tiene 20 dias laborales";
        case 11:
            cout<<"noviembre tiene 20 dias laborales";
        break;
        case 12:
            cout<<"diciembre tiene 21 dias laborales";
        break;
        default:
            cout<<"Error, no se ha ingresado un valor valido"<<endl;
        break;
    }

}
void No_bisiesto(){
    int mes;
    cout<<"Ingrese el numero del mes del cual quiera saber cuantos dias habiles tiene en un año no bisiesto: ";
    cin>>mes;
    switch(mes){
        case 1:
            cout<<"Enero tiene 19 dias laborales";
        break;

        case 2:
            cout<<"Febrero tiene 21 dias laborales";
        break;
        
        case 3: 
            cout<<"Marzo tiene 22 dias laborales";
        break;
        
        case 4:
            cout<<"Abril tiene 20 dias laborales";
        break;
        case 5:
            cout<<"mayo tiene 19 dias laborales";
        break;
        case 6:
            cout<<"junio tiene 20 dias laborales";
        break;
        case 7:
            cout<<"julio tiene 20 dias laborales";
        break;
        case 8:
            cout<<"agosto tiene 21 dias laborales";
        break;
        case 9:
            cout<<"septiembre tiene 22 dias laborales";
        break;
        case 10:
            cout<<"octubre tiene 20 dias laborales";
        case 11:
            cout<<"noviembre tiene 20 dias laborales";
        break;
        case 12:
            cout<<"diciembre tiene 21 dias laborales";
        break;
        default:
            cout<<"Error, no se ha ingresado un valor valido"<<endl;
        break;
    }
}
main(){
    
    int opcion;
    cout<<"ingrese si el año es bisiesto o no, si si es ponga uno, de lo contario marque cualquier numero"<<endl;
    cin>>opcion;

    if (opcion==1){ 
        bisiesto();
    }
    else{
        No_bisiesto();
    }
    return true;
}
