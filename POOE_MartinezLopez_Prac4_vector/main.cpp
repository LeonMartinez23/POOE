#include <iostream>
#include <vector>
/*Proporciona metodos para gestionar
la memoria automaticamente y proporciona el tamaño y capacidad de un vector*/

using namespace std;

int main(){

    vector<float> vect = {1,2,3,-2};
    float aux,valor_temp;

    //Automatizar un ciclo while
    vect.push_back(15);
    vect.push_back(20);
    vect.push_back(21);
    vect.push_back(-5);
    vect.push_back(-11);

    cout<<"El cuarto elemento de l vector es: "<<vect[3]<<endl;
    cout<<"El tamaño del vector es: "<<vect.size()<<endl;
    cout<<"La capacidad del vector es: " <<vect.capacity()<<endl;

    //Vector desordenado

    vect.push_back(105);
    cout<<"El vertor desordenado es:"<<endl;
    for(int i=0; i < vect.size(); i++){
            cout << vect.at(i) << " ";
    cout<<endl;}

  //algoritmo de ordenamiento por burbuja
    for (int i=0; i < 6 ; i++)
        for (int j=i+1; j < 7 ; j++)
            if (vect [i] > vect [j])
            {
                //intercambio
                aux = vect[i];
                vect[i]= vect[j];
                vect[j]=aux;
            }
    // vector ordenado
    cout << "El vector ordenado es:" << endl;
    for(int i=0; i<7 ; i++)
        cout << vect[i] << " ";
    cout << endl;



    return 0;
}

