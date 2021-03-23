//Sacar raiz cuadrada de un numero entero con el metodo babilonico
#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float numbers [5];

    cout<<"Introduzca 5 numeros reales"<<endl;

    for(int i=0; i < 5; i++)
        cin>>numbers[i];

    //Algoritmo de raiz
    for (int b=0; b<5; b++)
		numbers[b]=sqrt(numbers[b]); //Saca la raiz cuadrada

    //Imprime raices guardadas
    for(int i=0; i < 5; i++)
    cout<<"La raiz es: "<<numbers[i]<< " " <<endl;

    return 0;
}
