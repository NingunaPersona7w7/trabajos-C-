#include<iostream>
using namespace std;
main(){
	float n1,n2,resp;
	char op;
	cout << "ingrese signo de operacion a realizar realizar\n";
	cin >> op;
	cout <<"ingrese los numeros que quiere operar\n";
    cout <<"Ingrese el primer numero: \n";
	cin>>n1;
    cout<<"Ingrese el segundo numero: ";
	cin>>n2;
    
    
    switch (op) {
        case '+':
            resp = n1 + n2;
            	cout<<"\nel resultado de la suma es "<<resp;
            break;
        case '-':
            resp = n1 - n2;
            		cout<<"\nel resultado de la resta es: "<<resp;
            break;
        case '*':
        case 'x':
            resp = n1 * n2;
            	cout<<"\nel resultado de la multiplicacion es: "<<resp;
            break;
        case '/':
            resp = n1 / n2;
            	cout<<"\nel resultado de la divicion es: "<<resp;
            break;
        default:
			cout<<"reultadono valido";

	
	
	}
}
