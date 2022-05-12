#include<iostream>
#include<windows.h>
#include<stdlib.h>
using namespace std;
/*void menor_mayor1(){

		int vector[50];
		int elementos, fila, columna, auxiliar, i;
		cout<<"L: ";
		cin>>elementos;

			for(int i=1;i<=elementos;i++)
			{
				cout<< "\nIngrese los num:";
				cin>>vector[i];
				
				if (i>1)
				{
					if(vector[i]>vector[i-1])
					{
						cout<<"No puede ingresar un numero mayor al anterior\n";
						menorMayor();//para reso�ver esto crear una funcion del for y usarla en las dos ocaciones 

					}
				}
			}
}*/
void menorMayor()
		{
		int vector[50];//ponerlo en elementos para que este no pueda subir mas 
		int elementos, fila, columna, auxiliar, i;
		cout<<"L: ";
		cin>>elementos;
		i=1;
			while (i<=elementos)
			{
				cout<< "\nIngrese los num:";
				cin>>vector[i];
				
				if (i>1)
				{
					if(vector[i]>vector[i-1])
					{
						cout<<"No puede ingresar un numero mayor al anterior\n";
						menorMayor();//para reso�ver esto crear una funcion del for y usarla en las dos ocaciones 
						
						i=elementos;
						
					}
				}
				i++;
			}
					
					
					for(fila=1;fila<=elementos-1;fila++)
					{
						for(columna=1;columna<=elementos-1;columna++)
						{
							if(vector[columna]>vector[columna+1])
							{
								auxiliar=vector[columna+1];
								vector[columna+1]=vector[columna];
								vector[columna]=auxiliar;
							}
						}
					}
					
					for(int i=1;i<=elementos;i++)
						{
							cout<<vector[i]<<",";
						}
		}
		
int animacion()
	{
			char patos[]={'\n','\n','Q','U','E','\n','B','O','N','I','T','O','\n','E','S','\n','E','S','T','A','R','\n','E','N','\n','T','R','E','S'};
		int coco=0;
			while(coco<=29){
				
				cout<<patos[coco];
				coco=coco+1;
				Sleep(40);
			}
		return 0;
	}
		
int xNum()
	{
		int vector[50];
		int elementos;
		cout<<"Ingrese los num: ";
		cin>>elementos;   
		for(int i=1;i<=elementos;i++)
		{
			cin>>vector[i];
		}
		return 0;
	}
	
int cuatroNum()
	{		
		int i=0;
    	int aux = 0;
    	int j=0;
    	int vector_num[4];
   		int lon = 4;
 
  		int n = 0;
 
    for(i=0;i<lon;i++){
            printf("\n\nIngresa el numero %d: \n\n", i+1);
            scanf("%d", &n);
            vector_num[i]=n;
            }
 
 
         for(i=0;i<lon;i++){
                for(j=0;j<lon-1;j++){
                    if(vector_num[j]<vector_num[j+1]){
                        aux=vector_num[j];
                        vector_num[j]=vector_num[j+1];
                        vector_num[j+1]=aux;
                    }
                 for(i=0;i<lon;i++){
                    printf("%d", vector_num[i]);
                        }
                }
         }
    return 0;
		
	}

main ()
{
int vector[50];
int elementos, i;
int op;

cout<<"//MENU//";
cout<<"Para organizar de menor a mayor: 1 \n";
cout<<"Ingrese numero uno por uno: 2 \n";
cout<<"Ingrese cuatro numeros: 3 \n";
cin>> op;

switch(op){
	case 1:
		
	    menorMayor();
		
		if (vector[i] == 3)	
		{
			int animacion();	
		}	
		
		if (vector[i] <= 3)
		{
			menorMayor();
		}
		
		break;
	
	case 2:
		
		int xNum();
		
		while ((elementos < 4) && (elementos > 8))
		{
			int xNum();
		}
		
		break;
	
	case 3:
		
		int cuatroNum();
		
		break;
		
	default:
		cout<<"No ingresa";
	
}
 return 0;
}
