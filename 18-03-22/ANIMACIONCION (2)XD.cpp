	#include <iostream>
	#include <windows.h>
	using namespace std;
	 main()
	 {
	 
	  int vector[50];
	  int elementos,fila,columna,auxiliar,caso;
	  cout<<"si quiere ordenar de mayor a menor oprima 1 si quiere ordenar de menor a mayor oprima cualquier otra letra\n";
	  cin>>caso;
	  switch(caso) {

			case 1:
					cout<<"Ingrese la cantidad de elementos";
	  				cin>> elementos;
				  for(int i=1;i<=elementos;i++)
				  		{
				  			cin>> vector[i];
				  		}
				  for(fila=1;fila<=elementos-1;fila++)
				    {
				    	for(columna=1;columna<=elementos-1;columna++)
				    	{
				    		if(vector[columna]>vector[columna+1])
						
							{
								auxiliar= vector[columna+1];
								vector[columna+1]=vector[columna];
								vector[columna]=auxiliar;
							}
						}
					}
				   for(int i=1;i<=elementos;i++)
				    		{
				    			cout<<vector[i];
							}
			break;
			default:
					cout<<"Ingrese la cantidad de elementos";
	  				cin>> elementos;
				for(int i=1;i<=elementos;i++)
				  		{
				  			cin>> vector[i];
				  		}
				  for(fila=1;fila<=elementos-1;fila++)
				    {
				    	for(columna=1;columna<=elementos-1;columna++)
				    	{
				    		if(vector[columna]<vector[columna+1])
						
							{
								auxiliar= vector[columna+1];
								vector[columna+1]=vector[columna];
								vector[columna]=auxiliar;
							}
						}
					}
				   for(int i=1;i<=elementos;i++)
				    		{
				    			cout<<vector[i];
							}
			break;
		}
	}
		
		    
		    
			
