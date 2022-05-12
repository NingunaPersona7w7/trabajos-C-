#include <iostream>
using namespace std;

int j, i, dias;
float gran_total, hora;
char nombre[25][21];
char tipoM[25][21];
float precio[25];
int cantidad[25];
float venta[25];
float total[31];
main() {
	gran_total = (float)(0);
	cout<<"Digite el numero de dias que se efectuara la compra ";
	cin >> dias;
	i = 1;
	for(j = 1; j <= dias; j++){
		total[j - 1] = (float)(0);
		hora = (float)(8);
		cout<<"dia: ";
		while (hora <= 18) {
			cout<<"Digite la hora ";
			cin >> hora;
			if (hora <= 18) {
				cout<<"Nombre del cliente: ";
				gets(nombre[i - 1]);
				cout<<"Ingrese el nombre del producto: ";
				gets(tipoM[i - 1]);
				cout<<"Ingrese la cantidad: ";
				cin >> cantidad[i - 1];
				venta[i - 1] = precio[i - 1] * cantidad[i - 1];
				cout<<"El comprador: "<<nombre[i - 1]<<" compro: "<<venta[i - 1]<<"pesos";
				i = i + 1;
				total[j - 1] = total[j - 1] + venta[i - 1 - 1];
			}
			else {
			}
		}
		cout<<"Lo sentimos, la tienda se cierra, son las 18 horas";
		cout<<"el total de ventas en el dia: "<<j<<"fue de: "<< total[j - 1];
	}
	for(j = 1; j <= dias; j++){
		cout<<"el total de ventas en el dia:"<<j<<"fue de: "<<total[j - 1];
		gran_total = gran_total + total[j - 1];
	}
	cout<<"el total de ventas los: "<< dias<<"dias fueron: "<<gran_total<<" pesos";
}
