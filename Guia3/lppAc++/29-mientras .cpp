#include <iostream>
using namespace std;

char i;
char nombres[51], apellidos[51];
main() {
	i = 's';
	while (i == 's') {
		cout<<"bienvenido, ingrese su primer nombre";
		cout<<"\r\n";
		gets(nombres);
		cout<<"\r\n";
		cout<<"ingrese su primer apellido";
		cout<<"\r\n";
		gets(apellidos);
		cout<<"\r\n";
		i = 'n';
		cout<<"Hola "<<nombres<<apellidos<<" espero que se encuentre bien, si quiere seguir agregando personas presione s,en caso contrario presione cualquier letra ";
		cin >> i;
	}
}
