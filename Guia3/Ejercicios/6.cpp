#include<iostream>
using namespace std;
main ()
{
    int mes;
    cout<<"ingrese el nombre del mes"<<endl;
    cin>>mes;
    switch (mes)
    {
        case 1:
            cout<<"Enero tiene 31 dias"<<endl;
            break;
        case 2:
            cout<<"Febrero tiene 28 dias"<<endl;
            break;
        case 3:
            cout<<"Marzo tiene 31 dias"<<endl;
            break;
        case 4:
            cout<<"Abril tiene 30 dias"<<endl;
            break;
        case 5:
            cout<<"Mayo tiene 31 dias"<<endl;
            break;
        case 6:
            cout<<"Junio tiene 30 dias"<<endl;
            break;
        case 7:
            cout<<"Julio tiene 31 dias"<<endl;
            break;
        case 8:
            cout<<"Agosto tiene 31 dias"<<endl;
            break;
        case 9:
            cout<<"Septiembre tiene 30 dias"<<endl;
            break;
        case 10:
            cout<<"Octubre tiene 31 dias"<<endl;
            break;
        case 11:
            cout<<"Noviembre tiene 30 dias"<<endl;
            break;
        case 12:
            cout<<"Diciembre tiene 31 dias"<<endl;
            break;
        default:
            cout<<"mes no valido tiene 30 dias"<<endl;
            break;
    }

}
