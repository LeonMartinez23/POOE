#include <iostream>
#include <vector>
#include <Figura.h>
#include <circulo.h>
#include <triangulo.h>

using namespace std;

int main()
{
    vector<float> coord = {11,3,5};

    //Definiendo objetos de la clase figura
    Figura fig1 = Figura("Figura 1");
    fig1.asignarPerimetro(5);
    fig1.asignarArea(10);
    fig1.asignarCoordenadas(coord);
    fig1.imprimirDatos();

    Figura fig2 = Figura ();
    fig2.imprimirDatos();

    Rectangulo rec1= Rectangulo(1);
    rec1.asignarNombre("Rectangulo 1");
    rec1.imprimirDatos();

    Circulo circ1=Circulo(2,10.5);
    circ1.asignarNombre("Circulo 1");
    //circ1.asignarCoordenadas();
    circ1.imprimirDatos();

    Triangulo tri1 = Triangulo(3);
    tri1.asignarNombre("Triangulo");
    tri1.asignarBase(5);
    tri1.asignarAltura(8);
    tri1.imprimirDatos();

    cout <<"________________________________"<<endl;
    cout <<"Imprimiendo figuras desde vector"<<endl;
    cout <<"________________________________"<<endl;

    vector<Figura *> figuras;
    figuras.push_back(&fig1);
    figuras.push_back(&fig2);
    figuras.push_back(&rec1);
    figuras.push_back(&circ1);
    figuras.push_back(&tri1);

    for(int i=0;i<figuras.size();i++)
    {
        figuras.at(i)->imprimirDatos();
        figuras.at(i)->modificarId();
    }

    return 0;
}
