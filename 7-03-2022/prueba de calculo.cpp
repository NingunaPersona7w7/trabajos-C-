#include<iostream>
using namespace std;
main(){
	float n1,n2,resp;

    cout<<"Ingrese el primer numero: ";
    scanf("%f", &n1);
    cout<<"Ingrese el segundo numero: ";
    scanf("%f", &n2);
    
    resp =n1+n2;
	cout<<"\nel resultado de la suma es "<<resp;

	resp =n1-n2;
	cout<<"\nel resultado de la resta es: "<<resp;	

	resp =n1*n2;
	cout<<"\nel resultado de la multiplicacion es: "<<resp;

	resp =n1/n2;
	cout<<"\nel resultado de la divicion es: "<<resp;
	
	
}
