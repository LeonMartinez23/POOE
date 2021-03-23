#include <iostream>
#include Figura.h
#include <vector>
#include <string>

using namespace std;

Figura::Circulo(int id, float radio)
    {
        m_radio = radio;
        asignarId(id);
    }
Figura::~Circulo(){}
    float obtenerRadio(){return m_radio;}
    void asignarRadio(float radio){m_radio = radio;}
    void imprimirDatos()
    {
        cout<<"Id: "<< obtenerId()<<" Nombre: "<<obtenerNombre()<< " Perimetro: "
        << obtenerPerimetro() << " Area: " << obtenerArea()
        <<" Radio: "<<m_radio<<endl;
    }
    int modificarId()
    {
        cout << "Ejecutando metodo de clase Circulo"<<endl;
        cout << "El id modificado es: "<< obtenerId() * 400 <<endl;
        return  obtenerId() * 400;
    }
