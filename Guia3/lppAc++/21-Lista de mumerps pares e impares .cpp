#include <iostream>
using namespace std;


main() {
	int i, par, impar;
	par = 1;
	while (par <= 999) {
		cout<<par;
		cout<<"\r\n";
		par = par + 2;
	}
	impar = 0;
	while (impar <= 1000) {
		cout<< impar;
		cout<<"\r\n";
		impar = impar + 2;
	}
}
