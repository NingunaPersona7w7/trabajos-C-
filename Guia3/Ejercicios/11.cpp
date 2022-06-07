#include<iostream>
using namespace std;
main(){
    char letra;
    cout << "ingrese un caracter para sabre si es una vocal o no";
    cin >> letra;
    switch (letra){
        case 'a':
            cout << "es una vocal";
        break;
        case 'e':
            cout << "es una vocal";
        break;
        case 'i':
            cout << "es una vocal";
        break;
        case 'o':
            cout << "es una vocal";
        break;
        case 'u':
            cout << "es una vocal";
        break;
        default:
            cout << "no es una vocal";
        break;
    }
}