#include <iostream>
using namespace std;

int n1, n2, nn, i;
main() {
	i = 1;
	while (i <= 20) {
		cout<<"ingrese el numero";
		cout<<"\r\n";
		cin >> nn;
		if (i == 1) {
			n1 = nn;
			n2 = nn;
		}
		else {
			if (nn > n1) {
				n1 = nn;
			}
			else {
				if (nn < n2) {
					n2 = nn;
				}
			}
		}
		i = i + 1;
	}
	cout<<"el numero mayor es:"<< n1;
	cout<<"\r\n";
	cout<<"el numero menor es:"<< n2;
}
