#include <iostream>
using namespace std;


main() {
	int i, par, impar;
	cout<<"ingrese un numero par";
	cin >> par;
	while (par <= 50) {
		cout<< par;
		cout<<"\r\n";
		par = par + 2;
	}
}
