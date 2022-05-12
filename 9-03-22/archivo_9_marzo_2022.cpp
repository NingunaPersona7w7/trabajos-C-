#include <iostream>
using namespace std;
main()
{
int edad;
  cout<<"Programa que me permite ingresar a cine dependiendo la edad \n";
  cout<<"Ingrese su edad=";
  cin>> edad;
  if(edad>= 18)
  {
  	cout<<"Bienvenido a tu pelicula para adultos";
  }
  else if(edad>=15)
  {
  	cout<<"Bienvenido a la sala para adolecentes";
  }
  else
  {
  	cout<<"No puedes ingresar a esta sala";
  }
  
 } 
