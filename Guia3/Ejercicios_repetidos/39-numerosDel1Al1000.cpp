#include<iostream>
using namespace std;
main(){
    cout << "imprime todo los numeros impares de 1 a 999 y seguidamente los pares" << endl;
    for(int i = 0; i <=100; i++){
        if(i % 2 == 0){
            cout << i << endl;
        }
    }
    for(int i = 0; i <=100; i++){
        if(i % 2 != 0){
            cout << i << endl;
        }
    }
}