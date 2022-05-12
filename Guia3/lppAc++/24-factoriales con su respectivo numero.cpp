#include <iostream>
using namespace std;

main() {
	float num, fac, i, b;
	cout<<"ingrese un numero ";
	cin >> num;
	i = (float)(1);
	fac = (float)(1);
	while (i <= num) {
		fac = fac * i;
		cout<<" el factorial de "<<i<<" es: "<< fac;
		i = i + 1;
		cout<<"\r\n";
	}
}
