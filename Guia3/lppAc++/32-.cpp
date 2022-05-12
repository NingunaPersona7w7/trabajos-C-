#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int i=0;
void DiasSemana(){
cout<<"lunes\n"<<"martes\n"<<"miercoles\n"<<"jueves\n"<<"viernes\n"<<"sabado\n"<<"domingo\n";
}
void CalcularEdad(){
	setlocale(LC_CTYPE,"");
	int n1,n2,res;
    cout<<"para calcular su edad es necesario los siguientes datos"<<endl;
    cout<<"ingrese su fecha de nacimiento";
        cin>>n1;
    cout<<"ingrese el año vijente";
        cin>>n2;
    res=n2-n1;
    cout<<"usted tiene "<<res<<"años";
}
main()
{
	cout<<"si dese ver los dias de la semana oprima 1\n";
	cout<<"si desea calcular su edad oprima cualquer otro numero\n";
	cin>>i;
	switch (i)
	{
	case 1:
		DiasSemana();
		break;
	default:
		CalcularEdad();
	break;
	}

}

