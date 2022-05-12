#include<iostream>
using namespace std;
main()
{
   int edad;
	cout<< "programa que permite entrar a cine dependiendo de la edad";
	cout<< "ingrese su edad ";
	cin>>edad;
	if(edad>=18)
	{
		cout<<"disfruta tu pelicula para adultos";
	}
	else{
		if (edad>=10){
		cout<<"ingrese a sala para adolecents";
		}
		else {
			if(edad>=1 && edad<=10){
			
				cout<<"aun eres un niño";
			}
			else{
				cout<<"no estas en el rango de edad trabajado";
				}
	
		}
	}
		
} 
