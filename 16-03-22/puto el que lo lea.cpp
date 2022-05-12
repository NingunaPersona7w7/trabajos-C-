#include<iostream>
#include<windows.h>
using namespace std;
void entero(),caracter(),donle(),flotante(),cadena();
void enter(){

	int patos[5];
		patos[0]=8;
		patos[1]=1;
		patos[2]=27;
		patos[3]=3;
		patos[4]=12;
	for(int i=0;i<=4;i++){
		cout<<patos[i]<<endl;
	}
}
void cadena(){

	char perros[5];
		perros[0]='h';
		perros[1]='o';
		perros[2]='l';
		perros[3]='a';
		perros[4]='w';
		for(int i=0;i<=4;i++){
			cout<<perros[i]<<endl;
	}
}
void doble(){

	double gatos[5];
		gatos[0]=2.3;
		gatos[1]=2.6654;
		gatos[2]=7.45;
		gatos[3]=76.86;
		gatos[4]=15.1;
		for(int i=0;i<=4;i++){
			cout<<gatos[i]<<endl;
		}
}
void flotante(){

	float dragones[5];
		dragones[0]=123.1234;
		dragones[1]=254.8560;
		dragones[2]=27.1111;
		dragones[3]=96.2546;
		dragones[4]=1.258;
		for(int i=0;i<=4;i++){
			cout<<dragones[i]<<endl;
	}
}
/*void cadena{

	string pollos[5];
		pollos[0]="hola";
		pollos[1]="como";
		pollos[2]="estas";
		pollos[3]="baby";
		pollos[4]="uwu";
		for(int i=0;i<=4;i++){
			cout<<pollos[i]<<endl;
		}	
	}*/
main(){
	char patos[]={'\t','\t','P','R','O','G','R','A','M','A','C','I','O','N',' ','\n','\t','\t','\t','D','E','\n','\t','\t','\t','S','O','F','T','W','A','R','E',' ','\n','\t','\t','P','U','T','O',' ','E','L',' ','Q','U','E',' ','L','O',' ','L','E','A'};
	int coco=0;
		while(coco<=54){
		
			cout<<patos[coco];
			coco=coco+1;
			Sleep(40);
		}
}
