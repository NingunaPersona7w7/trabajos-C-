#include<iostream>
using namespace std;
main(){
	int numero = 0;
	int n1 =1, n2=1,res=0;
	for (int n1= 1; n1<=10; n1 ++){
		
		for(int n2=1 ;n2<=10;n2++){
			res=n2*n1;
			cout<<n1<<" * "<<n2<< " = "<<res <<endl;
			
		}
	}

}
