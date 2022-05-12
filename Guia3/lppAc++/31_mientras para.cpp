#include <iostream>

using namespace std;

int i, x;
main() {
	x = 1;
	while (x <= 2) {
		cout<<endl;
		for(i = 1; i <= 10; i++){
			cout<<"Voy en:"<< i;
			cout<<endl;
		}
		i = 1;
		cout<<endl;
		while (i <= 10) {
			cout<<"estoy en:"<< i;
			cout<<endl;
			i = i + 1;
		}
		cout<< i;
		cout<<endl;
		x++;
	}
}
