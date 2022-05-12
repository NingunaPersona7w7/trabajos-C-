
#include <iostream>
using namespace std;

int ciclo, opcion, codigo, contador, N;
float n1, n2, n3, n4, n5, promedio;
char nombre[31];
main(){
	opcion = 0;
	while (opcion <= 3) {
		cout<<"MENU DE OPCIONES";
		cout<<"\r\n";
		cout<<"1. Calcula el promedio de notas de un estudiante";
		cout<<"\r\n";
		cout<<"2. Calcular el promedio de imprime aprobado o reprobado del curso";
		cout<<"\r\n";
		cout<<"3. Para N estudiantes calcula promedio e imprime Aprobado o Reprobado";
		cout<<"\r\n";
		cout<<"4. Opcion para salir";
		cout<<"\r\n";
		cout<<"Digite el numero que desea teniendo en cuenta el menu";
		cout<<"\r\n";
		cin >> opcion;
		switch (opcion)
		{
		case 1:
				cout<<"Digite el codigo y nombre del alumno";
				gets(nombre);
				cout<<"\r\n";
				cout<<"Introduca las 5 calificaciones ";
				cin>>n2;
				cin>>n2;
				cin>>n3;
				cin>>n4;
				cin>>n5;
				cout<<"\r\n";
				promedio = (n1 + n2 + n3 + n4 + n5) / 5;
				cout<<"Registro de calificaciones";
				cout<<"\r\n";
				cout<<"Codigo:"<<codigo<<" Nombre del alumno: "<< nombre;
				cout<<"\r\n";
				cout<<"Calificaciones: ";
				cout<<"\t"<< n1;
				cout<<"\t"<< n2;
				cout<<"\t"<< n3;
				cout<<"\t"<< n4;
				cout<<"\t"<< n5;
				cout<<"Nota fina promedio";
				cout<<"\r\n";
			break;
			case 2:
				cout<<"Digite el codigo y nombre del alumno";
			gets(nombre);
			cout<<"\r\n";
			cout<<"Digite las 5 calificaciones";
				cin>>n2;
				cin>>n2;
				cin>>n3;
				cin>>n4;
				cin>>n5;
			cout<<"\r\n";
			promedio = (n1 + n2 + n3 + n4 + n5) / 5;
			cout<<"Registro de calificaciones";
			cout<<"\r\n";
			cout<< "Codigo:"<< codigo<<"Nombre del alumno:" << nombre;
			cout<<"\r\n";
			cout<<"calificaciones: ";
			cout<< n1;
			cout<< n2;
			cout<< n3;
			cout<< n4;
			cout<< n5;
			cout<<" ";
			cout<<"Nota fin promedio";
			cout<<"\r\n";
			if (promedio >= 7) {
				cout<<" APROBADO";
			}
			else {
				cout<<"REPROBADO";
			}
			break;
		case 3:
			contador = 1;
			cout<<"¿Cuantos alumnos se van a relacionar?";
			cin >> N;
			cout<<"\r\n";
			while (contador <= N) {
				cout<<"Codigo y nombre del alumno :"<< contador;
				gets(nombre);
				cout<<"\r\n";
				cout<<"Digite las 5 calificaciones";
				cin>>n2;
				cin>>n2;
				cin>>n3;
				cin>>n4;
				cin>>n5;
				cout<<"\r\n";
				promedio = (n1 + n2 + n3 + n4 + n5) / 5;
				cout<<" Registro de calificaciones";
				cout<<"\r\n";
				cout<<"Codigo:"<<codigo<<" Nombre del alumno:"<<nombre;
				cout<<"\r\n";
				cout<<"Calificaiones: ";
				cout<< n1;
				cout<< n2;
				cout<< n3;
				cout<< n4;
				cout<< n5;
				cout<<" ";
				cout<<"Nota fina promedio";
				cout<<"\r\n";
				if (promedio >= 6) {
					cout<<" APROBADO";
				}
				else {
					cout<<" REPROBADO";
				}
				contador++;
			}
			break;
		default:
			cout<<"Usted acaba de salir";
			break;

		}
	}
}