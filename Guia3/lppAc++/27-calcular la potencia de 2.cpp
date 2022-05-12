#include <iostream>
#include <math.h>
using namespace std;

float n, res;
main() {
	cout<<"ingrese un numero para usarlo como potencia de dos";
	cin >> n;
	res = pow(2, n);
	cout<<"la 2 elvado a la potencia de "<<n<<" es: "<<res;
}
