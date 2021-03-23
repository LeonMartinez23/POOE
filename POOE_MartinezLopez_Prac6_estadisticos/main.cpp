#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

int aleatorios(int c);

double promedio(double vector_aleatorios);

int main(){

    //Llamar subrutina aleatorios
    int num, aux;
    aux = aleatorios(num);

    //Lee el archivo numbers.txt
    ifstream archivo;
    string numeros;
    archivo.open("numbers.txt");
    if (archivo.fail())
    {
        //Mensaje en caso de no pudiera abrir el archivo
        cout<<"Hubo un error";
    }
   // double promedio,suma;
    while (!archivo.eof())
    {
        getline(archivo,numeros);
        //Convierto de string a float los numeros
        string esacosa = numeros;
        float otro = stof(esacosa);

    }
       double Psuma;
        double promedioImpreso=promedio(Psuma);
        cout<<"El promedio es: "<<promedioImpreso<<endl;

    archivo.close();

    return 0;
}
//Subrutina aleatorios
int aleatorios(int c){
    int num;

    ofstream fout("numbers.txt"); //Creando archivo
    for(int c = 1; c <= 100; c++)     //Indico (para pruebas) que solo me genere 3 numeros
    {
        num = rand()%(5001-1); //inicializando que sean numeros entre 1 y 5000
        fout<<num<<endl;
    }
    fout.close();

    return num;
}

//Subrutina promedio
double promedio(vector<float> vector_aleatorios){

    double Psuma;
    for (double i = 0; i < vector_aleatorios.size(); i++){
        Psuma = Psuma + vector_aleatorios.at(i)/100;
        }
    //cout<<"El promedio es: "<<Psuma<<endl;

    return Psuma;
}
