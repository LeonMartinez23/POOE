//Sacar raiz cuadrada de un numero entero con el metodo babilonico
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
/*
double raiz(float b, float h)
{
    for (b=0; b>h;)
    {   
        b=b + 0.000001;
		h=pow(b,2);
    }
    //return n*n;
}*/

int main(){

	float h,b;
    //b1,h1,b2,h2,b3,b4,h3,h4;//Variables involucradas

	vector<float> numbers [5];

    cout<<"Introduzca 5 numeros reales"<<endl;
    for(int i=0; i < 5; i++)
        cin>>numbers[i];

    for (b=0; numbers.size()>h;i++)
    {   
        b=b + 0.000001;
		h=pow(b,2);
    }
/*
    //Segundo numero
    for (b1=0; numbers[1]>h1;)
    {   
        //Algoritmo
        b1=b1 + 0.000001;
		h1=pow(b1,2);
    }

    //Tercer numero
    for (b2=0; numbers[2]>h2;)
    {   
        //Algoritmo
        b2=b2 + 0.000001;
		h2=pow(b2,2);
    }

    //Cuarto numero
    for (b3=0; numbers[3]>h3;)
    {   
        //Algoritmo
        b3=b3 + 0.000001;
		h3=pow(b3,2);
    }

    //Quinto numero
    for (b4=0; numbers[4]>h4;)
    {   
        //Algoritmo
        b4=b4 + 0.000001;
		h4=pow(b4,2);
    }

    //Imprime los resultados
    cout<<"La raiz cuadrada es: "<<b<<endl;
    cout<<"La raiz cuadrada es: "<<b1<<endl;
    cout<<"La raiz cuadrada es: "<<b2<<endl;
    cout<<"La raiz cuadrada es: "<<b3<<endl;
    cout<<"La raiz cuadrada es: "<<b4<<endl;*/

    //Imprime raices guardadas
    for(int i=0; i < 5; i++)
        cout<<"La raiz es: "<<numbers[i]<< " " <<endl;
    
    return 0;
}
