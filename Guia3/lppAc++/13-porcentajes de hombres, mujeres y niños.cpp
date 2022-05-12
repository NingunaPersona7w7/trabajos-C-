#include <iostream>
using namespace std;


main() {
	float h, m, n, total, por1, por2, por3, res1, res2, res3;
	cout<<"ingrese la cantidad de hombres, de mujeres y niños ";
	cout<<"\r\n";
	cout<<"Ingrese la cantidad de hombres ";
	cin >> h;
	cout<<"Ingrese la cantidad de mujeres  ";
	cin >> m;
	cout<<"Ingrese la cantidad de niños  ";
	cin >> n;
	total = h + m + n;
	res1 = h / total;
	por1 = res1 * 100;
	res2 = m / total;
	por2 = res2 * 100;
	res3 = n / total;
	por3 = res3 * 100;
	cout<<"el porsentaje de hombres es: "<< por1;
	cout<<"\r\n";
	cout<<"El porsentaje de mujeres es: "<< por2;
	cout<<"\r\n";
	cout<<"El porsentaje de niños es: "<< por3;
}
