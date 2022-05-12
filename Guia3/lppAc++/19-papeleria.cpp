
#include <iostream>
using namespace std;


main() {
	float cop, costo, des, cost, pres;
	cout<<"Bienveido, cuantas fotocopias desea imprimir, recuerde que su costo es de 100 cop ";
	cout<<"\r\n";
	cin >> cop;
	if (cop >= 100) {
		if (cop >= 100 && cop <= 200) {
			costo = cop * 100;
			des = 12 * costo;
			cost = des / 100;
			pres = costo - cost;
			cout<<"su total a pagar es "<< pres;
			cout<<"\r\n";
		}
		if (cop > 200 && cop <= 400) {
			costo = cop * 100;
			des = 15 * costo;
			cost = des / 100;
			pres = costo - cost;
			cout<<"su total a pagar es "<< pres;
			cout<<"\r\n";
		}
		if (cop > 400) {
			costo = cop * 100;
			des = 18 * costo;
			cost = des / 100;
			pres = costo - cost;
			cout<<"su total a pagar es "<< pres;
			cout<<"\r\n";
		}
	}
	else {
		costo = cop * 100;
		cout<<"su total a pagar es "<< costo;
	}
}
