#include <iostream>
#include <stdlib.h> //rand
#include <time.h>
#include <fstream>
#include <vector>

using namespace std;

int aleatorios();

int main()
{

//Llamar a hablar la funcion aleatorios
int matrizAleatorios = aleatorios();

//Leer archivo numbers2.txt
  char cadena[10000];
  float aux;
  ifstream fleer("numbers2.txt");
  while (!fleer.eof()) {
    fleer >> cadena;
    cout << cadena << endl;//Solo para ver los numeros en la terminal
    vector<float> cadena;
  }
  fleer.close();

    //Algoritmo de ordenamiento por burbuja
    for (int i=0; i < 10 ; i++)
        for (int j=i+1; j < 1000 ; j++)
            if (cadena [i] > cadena [j])
            {
                //intercambio
                aux = cadena[i];
                cadena[i]= cadena[j];
                cadena[j]=aux;
            }
    // Vector ordenado
    cout << "El vector ordenado es:" << endl;
    for(int i=0; i<1000 ; i++)
        cout << cadena[i] << ", ";
    cout << endl;

}

int aleatorios(){

srand(time(NULL));

    int matriz [10][100];

    //Aqui creo el archivo con los mil numeros
    ofstream file;
    file.open("numbers2.txt");
    for (int fila = 0; fila < 10; fila++)
    {
        for (int columna = 0; columna < 100; columna++)
        {
            matriz[fila][columna] = rand() % 100;
            //Imprime los numeros en el archivo
            file << matriz[fila][columna]<<", ";
        }
        cout<<endl;
    }
    file.close();

  return matriz[10][100];
}
