#include<iostream>
using namespace std;

main(){
    int n1, n2;
    cout << "Ingrese dos numeros para dividirlos" << endl;
    cin >> n1 >> n2;
    if (n2 != 0 && n1 != 0) {
        cout << "El resultado es: " << n1 / n2 << endl;
    } 
    else {
        cout << "No se puede dividir por cero" << endl;
    }
    
}