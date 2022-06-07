#include <iostream>
using namespace std;

main() {
	int a, b;
	cout<<"ingrese los dos nuemeros que quiera compara";
	cout<<"\r\n";
	cout<<"ingrese primer numero ";
	cin >> a;
	cout<<"ingrese segundo numero ";
	cin >> b;
	if (a > b) {
		cout<<"el numero mayor es "<< a;
	}
	else {
		cout<<"el numero mayor es "<< b;
	}
}
