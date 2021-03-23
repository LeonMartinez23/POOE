#include <iostream>
#include Figura.h
#include <vector>
#include <string>

using namespace std;

Figura::Triangulo(int id){m_id = id;}
 Figura::Triangulo(){}
 Figura::~Triangulo(){}
    void imprimirDatos()
    {
        cout<<"Id: "<< m_id<<" Nombre: "<<obtenerNombre()<< " Base: "
        << obtenerBase() << " Altura: " << obtenerAltura()<<endl;
    }
        int modificarId()
    {
        cout << "Ejecutando metodo de clase Rectangulo "<<endl;
        cout << "El id modificado es: "<< obtenerId() * 200 <<endl;
        return  obtenerId() * 200;
    }
