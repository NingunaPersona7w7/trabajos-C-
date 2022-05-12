#include <iostream>
using namespace std;


main() {
	float num, fac, i;
	cout<<"ingrese un numero";
	cin >> num;
	i = (float)(1);
	fac = (float)(1);
	while (i <= num) {
		fac = fac * i;
		i = i + 1;
	}
	cout<<"El factorial del numero "<<num<<"es: "<< fac;
}
