//ARENAS LOPEZ NADIA STEPHANIE 2AV4
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void max(int a, int b);

int main()

{
    int a, b;
    cout<< "Introduzca el primer valor: " << endl;
    cin>> a;
    cout<< "Introduzca el segundo valor: " << endl;
    cin>> b;
    max(a, b);
    return 0;
}

void max(int a, int b)
    {
       if(a>b){
           cout<< "El numero mayor es: " << a<< endl;
       }
       else if(a<b){
           cout<< "El numero mayor es: " << b<<endl;
       }
       else
        cout<< "ERROR" << endl;

    }





