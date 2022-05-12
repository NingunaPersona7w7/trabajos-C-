#include<iostream>
#include<math.h>//es la funciond matematicas
#include<stdlib.h> //system("PAUSE"), funcioana para poner una egecucioon
#include<conio.h>//getch(); espera un caracter para que se ejecute el programa
using namespace std;
main(){
	setlocale(LC_CTYPE, "Spanish");// pone toda la consola en español, sirve para usar los caracteres de español como Ñ
	int op;
	char salir;
	do
	{
	cout<< "¿a que piso desearia ingresar?"<<endl;
	cin>> op;
	
			system("cls");// borra el menu que teniamos antes 
			switch(op){
		        case 1:
		            int local;
		            cout<<"ingrese el numero del local que quiera entrar del 1 al 10";
		            cin>>local;
		             switch (local){
						case 1:
						 		float n1,n2,resp;
								char op;
								cout << "ingrese signo de operacion a realizar realizar\n";
								cin >> op;
								cout <<"ingrese los numeros que quiere operar\n";
							    cout <<"Ingrese el primer numero: \n";
								cin>>n1;
							    cout<<"Ingrese el segundo numero: ";
								cin>>n2;
							    
							    
							    switch (op) {
							        case '+':
							            resp = n1 + n2;
							            	cout<<"\nel resultado de la suma es "<<resp;
							            break;
							        case '-':
							            resp = n1 - n2;
							            		cout<<"\nel resultado de la resta es: "<<resp;
							            break;
							        case '*':
							        case 'x':
							            resp = n1 * n2;
							            	cout<<"\nel resultado de la multiplicacion es: "<<resp;
							            break;
							        case '/':
							            resp = n1 / n2;
							            	cout<<"\nel resultado de la divicion es: "<<resp;
							            break;
							        default:
										cout<<"reultadono valido";

						 	break;
		             	case 2:
						 		cout<< "bienvenid@ al local 2 energia suspendida ";
						 	break;
		             	case 3:
						 		cout<< "bienvenid@ al local 3 energia suspendida ";
						 	break;
		                case 4:
						 		cout<< "bienvenid@ al local 4 energia suspendida ";
						 	break;
		           		case 5:
						 		cout<< "bienvenid@ al local 5 energia suspendida ";
						 	break;
		             	case 6:
						 		cout<< "bienvenid@ al local 6 energia suspendida ";
						 	break;
		       			case 7:
						 		cout<< "bienvenid@ al local 7 energia suspendida ";
						 	break;
		    			case 8:
						 		cout<< "bienvenid@ al local 8 energia suspendida ";
						 	break;
		             	case 9:
						 		cout<< "bienvenid@ al local 9 energia suspendida ";
						break;	
		             	case 10:
						 		cout<< "bienvenid@ al local 10 energia suspendida ";
						 	break;
						default:
							cout<< "este piso no existe";
							break;
		         }
				break;
				case 2:
		            
		            cout<<"ingrese el numero del local que quiera entrar del 1 al 10";
		            cin>>local;
		             switch (local){
						case 1:
						 		cout<< "bienvenid@ al local 1 energia suspendida ";
						 	break;
		             	case 2:
						 		cout<< "bienvenid@ al local 2 energia suspendida ";
						 	break;
		             	case 3:
						 		cout<< "bienvenid@ al local 3 energia suspendida ";
						 	break;
		                case 4:
						 		cout<< "bienvenid@ al local 4 energia suspendida ";
						 	break;
		           		case 5:
						 		cout<< "bienvenid@ al local 5 energia suspendida ";
						 	break;
		             	case 6:
						 		cout<< "bienvenid@ al local 6 energia suspendida ";
						 	break;
		       			case 7:
						 		cout<< "bienvenid@ al local 7 energia suspendida ";
						 	break;
		    			case 8:
						 		cout<< "bienvenid@ al local 8 energia suspendida ";
						 	break;
		             	case 9:
						 		cout<< "bienvenid@ al local 9 energia suspendida ";
						break;	
		             	case 10:
						 		cout<< "bienvenid@ al local 10 energia suspendida ";
						 	break;
						default:
							cout<< "este piso no existe";
							break;
		         }
				break;
				case 3:
		           
		            cout<<"ingrese el numero del local que quiera entrar del 1 al 10";
		            cin>>local;
		             switch (local){
						case 1:
						 		cout<< "bienvenid@ al local 1 energia suspendida ";
						 	break;
		             	case 2:
						 		cout<< "bienvenid@ al local 2 energia suspendida ";
						 	break;
		             	case 3:
						 		cout<< "bienvenid@ al local 3 energia suspendida ";
						 	break;
		                case 4:
						 		cout<< "bienvenid@ al local 4 energia suspendida ";
						 	break;
		           		case 5:
						 		cout<< "bienvenid@ al local 5 energia suspendida ";
						 	break;
		             	case 6:
						 		cout<< "bienvenid@ al local 6 energia suspendida ";
						 	break;
		       			case 7:
						 		cout<< "bienvenid@ al local 7 energia suspendida ";
						 	break;
		    			case 8:
						 		cout<< "bienvenid@ al local 8 energia suspendida ";
						 	break;
		             	case 9:
						 		cout<< "bienvenid@ al local 9 energia suspendida ";
						break;	
		             	case 10:
						 		cout<< "bienvenid@ al local 10 energia suspendida ";
						 	break;
						default:
							cout<< "este piso no existe";
							break;
		         }
				break;
				case 4:
		           
		            cout<<"ingrese el numero del local que quiera entrar del 1 al 10";
		            cin>>local;
		             switch (local){
						case 1:
						 		cout<< "bienvenid@ al local 1 energia suspendida ";
						 	break;
		             	case 2:
						 		cout<< "bienvenid@ al local 2 energia suspendida ";
						 	break;
		             	case 3:
						 		cout<< "bienvenid@ al local 3 energia suspendida ";
						 	break;
		                case 4:
						 		cout<< "bienvenid@ al local 4 energia suspendida ";
						 	break;
		           		case 5:
						 		cout<< "bienvenid@ al local 5 energia suspendida ";
						 	break;
		             	case 6:
						 		cout<< "bienvenid@ al local 6 energia suspendida ";
						 	break;
		       			case 7:
						 		cout<< "bienvenid@ al local 7 energia suspendida ";
						 	break;
		    			case 8:
						 		cout<< "bienvenid@ al local 8 energia suspendida ";
						 	break;
		             	case 9:
						 		cout<< "bienvenid@ al local 9 energia suspendida ";
						break;	
		             	case 10:
						 		cout<< "bienvenid@ al local 10 energia suspendida ";
						 	break;
						default:
							cout<< "este piso no existe";
							break;
		         }
				break;
				case 5:
		            
		            cout<<"ingrese el numero del local que quiera entrar del 1 al 10";
		            cin>>local;
		             switch (local){
						case 1:
						 		cout<< "bienvenid@ al local 1 energia suspendida ";
						 	break;
		             	case 2:
						 		cout<< "bienvenid@ al local 2 energia suspendida ";
						 	break;
		             	case 3:
						 		cout<< "bienvenid@ al local 3 energia suspendida ";
						 	break;
		                case 4:
						 		cout<< "bienvenid@ al local 4 energia suspendida ";
						 	break;
		           		case 5:
						 		cout<< "bienvenid@ al local 5 energia suspendida ";
						 	break;
		             	case 6:
						 		cout<< "bienvenid@ al local 6 energia suspendida ";
						 	break;
		       			case 7:
						 		cout<< "bienvenid@ al local 7 energia suspendida ";
						 	break;
		    			case 8:
						 		cout<< "bienvenid@ al local 8 energia suspendida ";
						 	break;
		             	case 9:
						 		cout<< "bienvenid@ al local 9 energia suspendida ";
						break;	
		             	case 10:
						 		cout<< "bienvenid@ al local 10 energia suspendida ";
						 	break;
						default:
							cout<< "este piso no existe";
							break;
		         }
				break;
				case 6:
		          
		            cout<<"ingrese el numero del local que quiera entrar del 1 al 10";
		            cin>>local;
		             switch (local){
						case 1:
						 		cout<< "bienvenid@ al local 1 energia suspendida ";
						 	break;
		             	case 2:
						 		cout<< "bienvenid@ al local 2 energia suspendida ";
						 	break;
		             	case 3:
						 		cout<< "bienvenid@ al local 3 energia suspendida ";
						 	break;
		                case 4:
						 		cout<< "bienvenid@ al local 4 energia suspendida ";
						 	break;
		           		case 5:
						 		cout<< "bienvenid@ al local 5 energia suspendida ";
						 	break;
		             	case 6:
						 		cout<< "bienvenid@ al local 6 energia suspendida ";
						 	break;
		       			case 7:
						 		cout<< "bienvenid@ al local 7 energia suspendida ";
						 	break;
		    			case 8:
						 		cout<< "bienvenid@ al local 8 energia suspendida ";
						 	break;
		             	case 9:
						 		cout<< "bienvenid@ al local 9 energia suspendida ";
						break;	
		             	case 10:
						 		cout<< "bienvenid@ al local 10 energia suspendida ";
						 	break;
						default:
							cout<< "este piso no existe";
							break;
		         }
				break;
				case 7:
		          
		            cout<<"ingrese el numero del local que quiera entrar del 1 al 10";
		            cin>>local;
		             switch (local){
						case 1:
						 		cout<< "bienvenid@ al local 1 energia suspendida ";
						 	break;
		             	case 2:
						 		cout<< "bienvenid@ al local 2 energia suspendida ";
						 	break;
		             	case 3:
						 		cout<< "bienvenid@ al local 3 energia suspendida ";
						 	break;
		                case 4:
						 		cout<< "bienvenid@ al local 4 energia suspendida ";
						 	break;
		           		case 5:
						 		cout<< "bienvenid@ al local 5 energia suspendida ";
						 	break;
		             	case 6:
						 		cout<< "bienvenid@ al local 6 energia suspendida ";
						 	break;
		       			case 7:
		       					int edad,persona,i,promedio,edad1;
		       					cout<<"bienvenido a la sala de cine, ingrese su edad";
						 		cin>>edad;
						 		
						 			do{
									 	i=1;
									 	while(i<=3){
									 		cout<<"bienvenido a la sala de cine, ingrese su edad";
									 		edad=edad1
						 					cin>>edad;
										 
											if (edad > 18){
										        cout<<"bienvenido a la sala de cine para adultos";
										
										    }
										    else {
										        cout<<"bienvenido a la sala de cine para niños";
										    }
											edad=edad+edad1
											personas++;
											i++
										}
										promedio=edad/personas;
										cout<<"la el pomeio de las edades es "<<promedio<<" y el total de las personas es "<<personas;
									}
								while(edad>=100)
								
						 	break;
		    			case 8:
						 		cout<< "bienvenid@ al local 8 energia suspendida ";
						 	break;
		             	case 9:
						 		cout<< "bienvenid@ al local 9 energia suspendida ";
						break;	
		             	case 10:
						 		cout<< "bienvenid@ al local 10 energia suspendida ";
						 	break;
						default:
							cout<< "este piso no existe";
							break;
		         }
				break;
				case 8:
		        
		            cout<<"ingrese el numero del local que quiera entrar del 1 al 10";
		            cin>>local;
		             switch (local){
						case 1:
						 		cout<< "bienvenid@ al local 1 energia suspendida ";
						 	break;
		             	case 2:
						 		cout<< "bienvenid@ al local 2 energia suspendida ";
						 	break;
		             	case 3:
						 		cout<< "bienvenid@ al local 3 energia suspendida ";
						 	break;
		                case 4:
						 		cout<< "bienvenid@ al local 4 energia suspendida ";
						 	break;
		           		case 5:
						 		cout<< "bienvenid@ al local 5 energia suspendida ";
						 	break;
		             	case 6:
						 		cout<< "bienvenid@ al local 6 energia suspendida ";
						 	break;
		       			case 7:
						 		cout<< "bienvenid@ al local 7 energia suspendida ";
						 	break;
		    			case 8:
						 		cout<< "bienvenid@ al local 8 energia suspendida ";
						 	break;
		             	case 9:
						 		cout<< "bienvenid@ al local 9 energia suspendida ";
						break;	
		             	case 10:
						 		cout<< "bienvenid@ al local 10 energia suspendida ";
						 	break;
						default:
							cout<< "este piso no existe";
							break;
		         }
				break;
				case 9:
		        
		            cout<<"ingrese el numero del local que quiera entrar del 1 al 10";
		            cin>>local;
		             switch (local){
						case 1:
						 		cout<< "bienvenid@ al local 1 energia suspendida ";
						 	break;
		             	case 2:
						 		cout<< "bienvenid@ al local 2 energia suspendida ";
						 	break;
		             	case 3:
						 		cout<< "bienvenid@ al local 3 energia suspendida ";
						 	break;
		                case 4:
						 		cout<< "bienvenid@ al local 4 energia suspendida ";
						 	break;
		           		case 5:
						 		cout<< "bienvenid@ al local 5 energia suspendida ";
						 	break;
		             	case 6:
						 		cout<< "bienvenid@ al local 6 energia suspendida ";
						 	break;
		       			case 7:
						 		cout<< "bienvenid@ al local 7 energia suspendida ";
						 	break;
		    			case 8:
						 		cout<< "bienvenid@ al local 8 energia suspendida ";
						 	break;
		             	case 9:
						 		cout<< "bienvenid@ al local 9 energia suspendida ";
						break;	
		             	case 10:
						 		cout<< "bienvenid@ al local 10 energia suspendida ";
						 	break;
						default:
							cout<< "este piso no existe";
							break;
		         }
				break;
				case 10:
		     
		            cout<<"ingrese el numero del local que quiera entrar del 1 al 10";
		            cin>>local;
		             switch (local){
						case 1:
						 		cout<< "bienvenid@ al local 1 energia suspendida ";
						 	break;
		             	case 2:
						 		cout<< "bienvenid@ al local 2 energia suspendida ";
						 	break;
		             	case 3:
						 		cout<< "bienvenid@ al local 3 energia suspendida ";
						 	break;
		                case 4:
						 		cout<< "bienvenid@ al local 4 energia suspendida ";
						 	break;
		           		case 5:
						 		cout<< "bienvenid@ al local 5 energia suspendida ";
						 	break;
		             	case 6:
						 		cout<< "bienvenid@ al local 6 energia suspendida ";
						 	break;
		       			case 7:
						 		cout<< "bienvenid@ al local 7 energia suspendida ";
						 	break;
		    			case 8:
						 		cout<< "bienvenid@ al local 8 energia suspendida ";
						 	break;
		             	case 9:
						 		cout<< "bienvenid@ al local 9 energia suspendida ";
						break;	
		             	case 10:
						 		cout<< "bienvenid@ al local 10 energia suspendida ";
						 	break;
						default:
							cout<< "este piso no existe";
							break;
		         }
				break;
				default:
					cout<<"ese piso no existe\n";
				break;
		
			}
			cout<<"\ningrese s para salir en caso contrario escribir cualquier letra";
			cin>>salir;
	
	}
	while(salir!='s');// este es la condicion para que se repita en ese caso si se usa el operador == es siempre y cuando sea s siga y si ponemos != es siempre y cuando sea diferente 
	cout<<"\ngracias vuelva pronto";
}
