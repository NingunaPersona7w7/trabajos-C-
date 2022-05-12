#include<iostream>
using namespace std;
void suma(),mama(),recuerdo(),mensaje(),mensaje1(),cine();
int uno=1,dos=15,res,i;


void mensaje1(){
		cout<<"\nestoy en tu mensajen\n";		
}

void mensaje(){

		if(i=3)
		{
		  mensaje1();
		  mensaje1();
		  mensaje1();
		  
		 
		}		
}

void suma(){
	
	while(i<=2){
	
		res=uno+dos;
		cout<<"\nla suma es: "<< res<<endl;
		i++;
	}
}
void mama(){
	
	for (int i=0;i<3;i++){

		cout<<"\nhola mama\n";
	
	}
}
void cine(){
int edad,persona,i,promedio,edad1,suma2=0, persona1,suma1=0,personas_t,suma_t;
									 		
	i=1;
	while(i<=3)
		{
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
			suma2=suma2+edad;
			persona=persona+1;
			i=i+1;
		}
													
		if(suma2<100)
		{
			i=1;
			while(i<=2)
			{
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
				persona1=persona1+1;
				i=i+1;
			}
		}
		else
		{
				cout<<"gracias por su dinero :D "<<endl;
		}
			personas_t = persona1+persona;
			suma_t=suma1+suma2;
			promedio=suma_t/personas_t;
			cout<<"la el promedio de las edades es "<<promedio<<" y el total de las personas es "<<personas_t;
}
 

main(){
	
	cine();	
	suma();
	mensaje();
	mama();


	

	
}

