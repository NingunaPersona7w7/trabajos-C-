
#include <iostream>
using namespace std;

int x, C, V;
main() {
    cout<<"Ingrese una opcion\n"<<"para estar en suma ingrese el numero 1\n";
    cout<<"para estar en resta ingrese el numero 2\n";
    cin>> x;
    switch(x){
        case 1:
            cout<<"estas en suma";
        break;
        case 2:
            cout <<"estas en resta";
        break;
        default:
            cout<<"no estas en nada";
        break;
    }
        

}

