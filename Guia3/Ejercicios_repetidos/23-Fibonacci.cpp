#include <iostream>
using namespace std;


main() {
	int n, a, b, c, i;
	a = 0;
	b = 1;
	for(i = 1; i <= 100; i++){
		cout<<"el numero "<< i<<" de la sucecion de Fibonacci es "<< a;
		cout<<"\r\n";
		c = a + b;
		a = b;
		b = c;
	}
}
