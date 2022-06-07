#include <string>
#include <iostream>
using namespace std;

 main() {
	float a, b, suma, resta, multi, divi;
	cout<<"sumar, restar, multiplicar y dividir dos numeros";
	cout<<"\r\n";
	cout<<"Ingrese el primer numero para las operaciones";
	cout<<"\r\n";
	cin >> a;
	cout<<"Ingrese el segundo numero para las operaciones";
	cout<<"\r\n";
	cin >> b;
	cout<<"\r\n";
	suma = a + b;
	resta = a - b;
	multi = a * b;
	divi = a / b;
	cout<<"La suma de estos numeros da: "<< suma;
	cout<<"\r\n";
	cout<<"La resta de estos numeros da: "<< resta;
	cout<<"\r\n";
	cout<<"La multiplicacion de estos numeros da: "<<multi;
	cout<<"\r\n";
	cout<<"La division de estos numeros da: " <<divi;
}
