#include <iostream>

using namespace std;

//Esto es un elemplo de programacion de generica
template <class Any> //typef
void intercambiar(Any &a,Any &b)
{
    Any temp =a;
    a=b;
    b=temp;
}

template <class A>
void imprimir(A arr[],int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i]<<" ";
    cout << ""<< endl;
}

template <class T>
void ordenarPorBurbuja(T arr[],int n)
{
    cout << "El tamaño deñ arreglo es: "<<n<<endl;
    cout <<"El arreglo original es: "<<endl;
    imprimir(arr,n);

    cout<<"El arreglo ordenado es: "<<endl;
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; i < n; j++)
            if(arr[i]>arr[j])
                intercambiar(arr[i],arr[j]);
    imprimir(arr,n);
}


int main(){

    double arr[6]={4,-3,11.2,-1,8,9.0};
    char arr1[6]={'a','s','-','@','e','b'};
    string arr2[6]={"a13b34a5/@d","al8230.,altamirano","altacia","atenuar","elefante"};
    ordenarPorBurbuja(arr,6);
    ordenarPorBurbuja(arr1,6);
    ordenarPorBurbuja(arr2,6);

    return 0;
}
