//ARENAS LOPEZ NADIA STEPHANIE 2AV4
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int max(int a, int b);

int main()

{
    int a, b, c;
    cout<< "Introduzca el primer valor: " << endl;
    cin>> a;
    cout<< "Introduzca el segundo valor: " << endl;
    cin>> b;
    cout<< "Introduzca el tercer valor" << endl;
    cin>> c;
    int max1 = max(a, b);
    int max2 = max(max1,c);
    cout<< "El numero mayor es: " << max2 << endl;
    return 0;
}

int max(int a, int b)
    {
       int c;
       if (a>b){ c= a;}
       else { c= b;}

       return c;

    }
