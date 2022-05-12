#include<iostream>

using namespace std;

int main(){
	int edad,persona,i,promedio,edad1,suma=0, persona1,suma1,personas_t,suma_t;
									 		
	i=1;
	while(i<=3)
		{
			//edad=edad1;
			cout<<"bienvenido a la sala de cine, ingrese su edad\n";
			cin>>edad;
				if (edad > 18)
				{
					cout<<"bienvenido a la sala de cine para adultos\n";
																
				}
				else 
				{
					cout<<"bienvenido a la sala de cine para niños\n";
				}
			suma=suma+edad;
			//edad=edad+edad1;
			persona=persona+1;
			i=i+1;
		}
													
		if(suma<100)
		{
			i=1;
			while(i<=2)
			{
				//edad=edad1;
				cout<<"bienvenido a la sala de cine, ingrese su edad\n";
				cin>>edad;
					if (edad > 18)
					{
						cout<<"bienvenido a la sala de cine para adultos\n";
																
					}
					else 
					{
						cout<<"bienvenido a la sala de cine para niños\n";
					}
				suma1=suma1+edad;
				//edad=edad+edad1;
				persona1=persona1+1;
				i=i+1;
			}
		}
		else
		{
				personas_t = persona1+persona;
				cout<<"gracias por su dinero :D "<<endl;
		}
			personas_t = persona1+persona;
			suma_t=suma1+suma;
			promedio=suma_t/personas_t;
			cout<<"la el promedio de las edades es "<<promedio<<" y el total de las personas es "<<personas_t;
											
}
