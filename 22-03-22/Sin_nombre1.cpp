	#include <iostream>
	#include <windows.h>
	using namespace std;
	void ordenar(){	 
	 
		int vector[50];
		int elementos,fila,columna,auxiliar,caso;
		cout<<"ordenar numeros de mayor a menor\n";
		cin>>caso;
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
	void animacion(){
		char patos[]={'Q','U','E',' ','B','O','N','I','T','O',' ','E','S','N',' ','E','S','T','A','R',' ','E','N','T','R','E'};
		int coco=0;
		int limite = sizeof(patos)/sizeof(1);
		while(coco<=limite){
		
			cout<<patos[coco];
			coco=coco+1;
			Sleep(40);
		}
	}
	 main()
	 {
	 

	}
