#include <iostream>
using namespace std;


main() {
	int a, b;
	cout<<"ingrese los dos nuemeros que quiera compara y al mayor sumarle 10 si el mayor es menor de 40 le sumara 15";
	cout<<"\r\n";
	cout<<"ingrese primer numero ";
	cin >> a;
	cout<<"ingrese segundo numero ";
	cin >> b;
	if (a > b) {
		cout<<" El numero mayor es: "<< a;
		cout<<("\r\n");
		if (a > 20) {
			if (a < 40) {
				a = a + 15;
				cout<<" El numero mayor mas 15 es: "<< a;
			}
			else {
				a = a + 10;
				cout<<" El numero mayor mas 10 es: "<< a;
			}
		}
	}
	else {
		cout<<" El numero mayor es: "<< b;
		if (b > 20) {
			if (b < 40) {
				b = b + 15;
				cout<<" El numero mayor mas 15 es: "<< b;
			}
			else {
				b = b + 10;
				cout<<" El numero mayor mas 10 es: "<< b;
			}
		}
	}
}
