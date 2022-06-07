
#include <string>
#include <iostream>
using namespace std;

float a, b, c;
main() {
	cout<<"Algoritmo que pida el valor de un articulo cualquiera y calcule el 16";
	cout<<"\r\n";
	cout<<"Por favor ingrese el valor de su articulo";
	cout<<"\r\n";
	cin >> a;
	b = a * 0.16;
	c = a + b;
	cout<<"Su articulo cuesta: el iva es del 16, y el valor de su producto con el iva es de: "<< a<< c;
}
