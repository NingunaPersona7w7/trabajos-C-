#include <iostream>
using namespace std;
main() {
	float h, m, total, por1, por2, res1, res2;
	cout<<"ingrese la cantidad de hombres y de mujeres ";
	cout<<"\r\n";
	cout<<"Ingrese la cantidad de hombres ";
	cin >> h;
	cout<<"Ingrese la cantidad de mujeres  ";
	cin >> m;
	total = h + m;
	res1 = h / total;
	por1 = res1 * 100;
	res2 = m / total;
	por2 = res2 * 100;
	cout<<"el porsentaje de hombres es: "<< por1;
	cout<<"\r\n";
	cout<<"El porsentaje de mujeres es: "<< por2;
}
