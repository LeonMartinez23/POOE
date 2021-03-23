#include <iostream>

using namespace std;

int main()
{
    float vect[] = {10, 11.5, 15, 14.7, 7, 8.0, 2};
    float aux;

    cout << "Introduzca 7 numeros reales \n" << endl;
    // cin >> vect[0] >> vect[1] >> vect[2] >> vect[3] >> vect[4] >> vect[5] >> vect[6]; es la manera larga de hacerlo pero se puede hacer mejor si usamos un ciclo
    for (int i=0; i < 7 ; i++)
        cin >> vect[i];  //uso de ciclo cuando deseamos poner muchos numeros

    //vector desordenado
    cout << "El vector desordenado es:" << endl;

    for (int i=0; i < 7 ; i++)
        cout << vect [i] << "  ";

    cout << endl;

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
