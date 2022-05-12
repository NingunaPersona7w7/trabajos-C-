#include <iostream>
using namespace std;


main() {
	int a, b;
	cout<<"ingrese los dos nuemeros que quiera compara";
	cout<<"\r\n";
	cout<<"ingrese primer numero";
	cin >> a;
	cout<<"ingrese segundo numero ";
	cin >> b;
	if (a > b) {
		cout<<" El numero mayor es: "<< a;
		cout<<"\r\n";
		if (a > 20) {
			a = a + 10;
			cout<<" El numero mayor mas 10 es: "<< a;
		}
	}
	else {
		cout<<" El numero mayor es: "<< b;
		if (b > 20) {
			b = b + 10;
			cout<<" El numero mayor mas 10 es: "<< b;
		}
	}
}
