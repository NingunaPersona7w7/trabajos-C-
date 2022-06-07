#include <math.h>
#include <iostream>
using namespace std;

float n, res, x;
main() {
	cout<<"ingrese los numeros a los cuales quiera calcular su respectiva potencia";
	cout<<"\r\n";
	cout<<"Cual numero quiere que sea la base de la operacion";
	cout<<"\r\n";
	cin >> n;
	cout<<"Cual numero quiere que sea la potencia de la operacion";
	cout<<"\r\n";
	cin >> x;
	res = pow(n, x);
	cout<< x <<" Elvado a la potencia de <<n<< es: "<<res;
}
