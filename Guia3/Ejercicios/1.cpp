#include<iostream>

using namespace std;

main()
{

    float Centigrados=0.0;
    float Fahrenheit=0.0;

    cout<<"ingrese grados fahrenheit: ";
    cin>>Fahrenheit;

    Centigrados = (5.0/9.0)*(Fahrenheit-32);

    cout<<"Grados Celsius :"<<Centigrados;
}