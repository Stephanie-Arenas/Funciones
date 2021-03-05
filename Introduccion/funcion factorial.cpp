//ARENAS LOPEZ NADIA STEPHANIE 2AV4
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int Factorial(int a);

int main()
{
    int a;
    cout<< "Introduzca el valor: " <<endl;
    cin>> a;
    int fact= Factorial(a);
    cout<< "El factorial es: " << fact<< endl;

    return 0;
}

int Factorial(int a)
{
    int i;
    int resultado= 1;
    for(i= 1; i<=a; i++){
        resultado *= i;
    }

    return resultado;
}
