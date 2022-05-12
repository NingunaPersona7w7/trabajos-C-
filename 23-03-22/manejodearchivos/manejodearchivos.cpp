#include <iostream>//es utilizado para operaciones de entrada/salida
#include <string.h>//contiene la definición de macros, constantes, funciones y tipos y algunas operaciones de manipulación de memoria.
#include <windows.h>//tiene algunas funciones utiles como retrazar la ejecucion de un codigo por algunos instantes
#include <fstream>//tienen las funciones de lectura y escribtura de archivos 
using namespace std;//es donde se guardan las librerias estandar para de espacio de texto
void menu();void guardar();void eliminar();void consultar();void buscar();void modificar();void salir();//declara todas la funciones que usaremos en el programa
char nombre[40],grupo[10];//son listas que almacenan los datos que queramos en este caso caracteres 
char mensaje[] = {'P','R','O','G','R','A','M','A','C','I','O','N',' ','D','E',' ','S','O','F','T','W','A','R','E'};//es una cadena de texto que contiene los caracteres programacion de software
int semestre,edad,auxclave,clave;//se declaran la variables que usaremos en todo este programa
bool encontrado;//una varibale de verdadero o falso 
main()//la funcion principa de todo programa de c++
{
	menu();//	system("PAUSE"); llama la funcion de menu
}
void menu()// es una ufncion declarrada para cumplir una funcion especifica 
{
	int opcion;//delacla al variable de funcion 
	do// es el principio de la un siclo repita "hace luego piensa"
	{
		cout<<"\n \t\t\t\t\t Manejo de archivos en c++ \n"<<endl;//imprime una liena de texto en consola para el usuario 
		cout<<"\t\t\t\t\t 1.Guardar"<<endl;//imprime una liena de texto en consola para el usuario
		cout<<"\t\t\t\t\t 2.Eliminar"<<endl;//imprime una liena de texto en consola para el usuario
		cout<<"\t\t\t\t\t 3.Consultar Registros"<<endl;//imprime una liena de texto en consola para el usuario
		cout<<"\t\t\t\t\t 4.Buscar Registros"<<endl;//imprime una liena de texto en consola para el usuario
		cout<<"\t\t\t\t\t 5.Modificar"<<endl;//imprime una liena de texto en consola para el usuario
		cout<<"\t\t\t\t\t 6.Salir"<<endl;//imprime una liena de texto en consola para el usuario
		cout<<"\n \t\t\t\t\t Seleccione una de las Opciones"<<endl;//imprime una liena de texto en consola para el usuario
		cin>>opcion;//en este espacio se pide la variable para evalularla 
		switch(opcion)//se evalua la variable opcion para seleccionar la opcion que el usuario desea acceder
			{
			case 1: guardar();	break;// si el usuario selecciono la opcion 1 ejecutara la funcnion guardar
			case 2: eliminar();	break;//si el usuario selecciona la opcion 2 ejecutara la funcion eliminar
			case 3: consultar();break;//si el usuario selecciona la opcion 3 ejecutara la funcion consulatar
			case 4: buscar();	break;//si el usuario selecciona la opcion 4 ejecutara la funcion buscar 
			case 5: modificar();break;//si el usuario selecciona la opcion 5 ejecutara la funcion modificar
			case 6: salir();	break;//si el usuario selecciona la opcion 6 ejecutara la funcion salir 
			default: cout<<"La Opcion que Elegiste no hace parte del Menu";	break;//esta es la linea por defecto si no se evalua alguna opcion que este entre las opciones
			}
	}
	while(opcion!=6);//este ciclo genera que la unica forma de que salga de este bucle es si opcion es diferente = 6 que es la opcion de salir
}

void guardar()//la funcion  guardar se encarga de guardar en un archivo designado la informacon del usuario con el fin de almacenarlo 
{
	ofstream escritura;//esta linea escribe en el archivo los datos ingresados por el usuario 
	ifstream consulta;//declara la variable consulta como una clase orienteda a la lectura
	bool repetido=false;//esta es una varibale que se declara para cambiar su estado binario en otra ocacion
	
	escritura.open("aprendiz.txt", ios::out|ios::app);//se prepara para dar la oportunidad de ingresar diferentes datos 
	consulta.open("aprendiz.txt", ios::in);//se prepara para leer la informacion que este en en este archivo
	
	if(escritura.is_open() && consulta.is_open())//es un condicional que evalua si los dos archivos de texto estan abiertos para ingresar la informacion 
		{
			cout<<"ingresa la clave del aprendiz:";//texto para avisar 
			cin>>auxclave;//solicita el el varlor de la variable 
			consulta>>clave;//consulta que la variable no haya sido guardo antes 
			while(!consulta.eof())//
				{
					consulta>>nombre>>semestre>>grupo>>edad;
					if(clave==auxclave)
						{
							cout<<"Ya existe el registro con esa clave"<<endl;
							repetido=true;
							break;
						}
					consulta>>clave;
				}
				if(repetido==false)
					{
						cout<<"Ingresa el Nombre del Aprendiz";	cin>>nombre;
						cout<<"Ingresa el Semestre del Aprendiz";cin>>semestre;
						cout<<"Ingresa el Grupo del Aprendiz";	cin>>grupo;
						cout<<"Ingresa la Edad del Aprendiz";	cin>>edad;
						escritura<<auxclave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
						cout<<"Registro agregado con exito!"<<endl;
					}
		}
		else
		{
			cout<<"Error, el registro no se pudo abrir o no ha sido creado"<<endl;
		}
	escritura.close();consulta.close();
	}
void eliminar()
{
	ofstream aux; ifstream leer;encontrado=false; int auxclave;
	aux.open("auxiliar.txt", ios::out);	leer.open("aprendiz.txt", ios::in);
	
	if(aux.is_open() && leer.is_open())
		{
			cout<<"Ingresa la clave del aprendiz que deseas Eliminar"<<endl;
			cin>>auxclave;
			leer>>clave;
			while(!leer.eof())
				{
					leer>>nombre>>semestre>>grupo>>edad;
					if(auxclave==clave)
						{
							encontrado=true;
							cout<<"Registro Eliminado"<<endl;
						}
					else
						{
							aux<<clave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
						}
					leer>>clave;
				}	
		}
	else
		{
			cout<<"Error, el registro no se pudo abrir o no ha sido credo"<<endl;
		}
	if(encontrado==false)
		{
			cout<<"Error, Reviza tu clave pues esa no esta dentro de mi archivo"<<auxclave<<endl;
		}
	leer.close();
	aux.close();
	remove("aprendiz.txt");
	rename("auxiliar.txt","aprendiz.txt");	
	}
void consultar()
{
	ifstream leer;	
	leer.open("aprendiz.txt", ios::out|ios::in);
		
	if(leer.is_open())
		{
			cout<<"						Registros del archivo aprendiz.txt"<<endl;
			cout<<"						----------------------------------"<<endl;
			leer>>clave;
			while(!leer.eof())
			{
				leer>>nombre>>semestre>>grupo>>edad;
				cout<<"					Clave:"   <<clave<<endl;
				cout<<"					Nombre:"  <<nombre<<endl;
				cout<<"					Semestre:"<<semestre<<endl;
				cout<<"					Grupo:"   <<grupo<<endl;
				cout<<"					Edad:"    <<edad<<endl;
				leer>>clave;
				cout<<"					----------------------------------"<<endl;
			}
		}
		else
		{
			cout<<"Error, el Archivo no se pudo abrir o no ha sido creado"<<endl;
		}
	leer.close();
}
void buscar()
{
	cout<<"La Opcion que Elegiste Fue buscar";
	ifstream leer;	
	leer.open("aprendiz.txt", ios::out|ios::in);
	encontrado=false;	
	if(leer.is_open())
		{
			cout<<"Ingresa la clave del aprendiz que deseas buscar: ";
			cin>>auxclave;
			leer>>clave;
			while(!leer.eof())
			{
				leer>>nombre>>semestre>>grupo>>edad;//leyendo campos del registro
				if(auxclave==clave)//comparacion para verificar si el registro es encontrado
					{
						cout<<"					----------------------------------"<<endl;
						cout<<"					Clave:"   <<clave<<endl;
						cout<<"					Nombre:"  <<nombre<<endl;
						cout<<"					Semestre:"<<semestre<<endl;
						cout<<"					Grupo:"   <<grupo<<endl;
						cout<<"					Edad:"    <<edad<<endl;
						cout<<"					----------------------------------"<<endl;
						encontrado=true;
					}
					leer>>clave;
			}
			if(encontrado==false)
				{
					cout<<"no se encontraron registros con esa clave"<<auxclave<<endl;
				}
		}
		else
		{
			cout<<"No se pudo abrir el archivo o aun no ha sido creado"<<endl;
		}
	leer.close();//cerrar archivo
}
void modificar()
{
	ofstream aux;
	ifstream leer;
	encontrado=false;
	int auxclave;
	char auxnombre[20];
	aux.open("auxiliar.txt",ios::out);
	leer.open("aprendiz.txt",ios::in);
	if(aux.is_open() && leer.is_open())
	{
		cout<<"Ingresa la clave del aprendiz que deseas modificar "<<endl;
		cin>>auxclave;
		leer>>clave;
		while(!leer.eof())
		{
		leer>>nombre>>semestre>>grupo>>edad;
		if(auxclave==clave)
			{		
			encontrado=true;
			cout<<"					----------------------------------"<<endl;
			cout<<"					Clave:"   <<clave<<endl;
			cout<<"					Nombre:"  <<nombre<<endl;
			cout<<"					Semestre:"<<semestre<<endl;
			cout<<"					Grupo:"   <<grupo<<endl;
			cout<<"					Edad:"    <<edad<<endl;
			cout<<"					----------------------------------"<<endl;
			cout<<"	        Ingresa el nuevo nombre del aprendiz con clave:"<<clave<<endl;
			cin>>auxnombre;
			aux<<clave<<" "<<auxnombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
			cout<<"El registro fue modificado con exito! "<<endl;
			}
		else
			{
				aux<<clave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
			}
		leer>>clave;
		}
		if(encontrado==false)
			{
				cout<<"no se encontraron registros con esa clave"<<auxclave<<endl;
			}	
	}
	else
	{
		cout<<"No se pudo abrir el archivo o aun no ha sido creado"<<endl;
	}
	leer.close();
	aux.close();
	remove("aprendiz.txt");
	rename("auxiliar.txt","aprendiz.txt");	
}
void salir()
{
	cout<<endl<<endl<<endl<<"\t\t\t\t\t\t";
	for(int i=0;i<=23;i++)
		{
			cout<<mensaje[i];
			Sleep(80);
		}
		cout<<endl<<endl<<"\t\t\t\t\t       Adios..programa finalizado";
}







