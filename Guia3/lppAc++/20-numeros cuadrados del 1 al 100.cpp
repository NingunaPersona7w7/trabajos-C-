#include <math.h>
#include <iostream>
using namespace std;

main() {
	float n1;
	int i;
	for(i = 1; i <= 100; i++){
		n1 = pow(i, 2);
		cout<<"El cuandrado de "<<i<< " es "<< n1;
		cout<<"\r\n";
	}
}
