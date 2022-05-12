#include<iostream>
using namespace std;
main()
{
	int w =0;
do
{
	string nombre;
	int edad; bool bueno= true; 	
	cout<<"Ingrese su nombre: ";
	cin>> nombre;
	cout<<"\nIngrese su edad: ";
	cin>>edad;
	cout<<"Usted se llama "<<nombre<<", su edad es "<<edad<<" y usted es: "<<bueno;
	getline (cin,nombre);
	w=w+1;
}
while(w<2);
}
