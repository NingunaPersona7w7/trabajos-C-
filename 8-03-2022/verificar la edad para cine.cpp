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
	if(edad>=15 && edad<18)
	{
		cout<<" ingrese a cine de adolecente";
	}
	else if (edad>=10 && edad<15){
		cout<<"ingrese a sala para niños";
	}
	else {
		cout<<"no puedes ingresar";
	}
}
