#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int op;
	cout<< "por favor ingrese un numero del 1 al 10 dependeindo de su interes"<<endl;
	cout<<"1 para estoy en uno"<<endl;
	cout<< "2 para estoy en dos"<<endl;
	cout<< "3 para estoy en tres"<<endl;
	cin>> op;
	switch(op)
    {
        case 1:
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
			
            break;
		case 2:
				double num1,num2,pot;
				cout<<"ingrese la base de la potencia\n";
				cin>>num1;
				cout<<"ingrese el numero del exponente a potenciar\n";
				cin>>num2;
				pot=pow(num1,num2);
				cout<<"la potencia de "<<num1<<" elevado a "<<num2<<" es igual a "<<pot;
			break;
		case 3:
				cout<<"estoy en tres\n";			
			 break;
		case 4:
				cout<<"estoy en tres\n";			
			 break;
		default:
			cout<< "esa opcion no se reconoce\n";
		break;
	}
}
