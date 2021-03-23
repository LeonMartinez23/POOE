#include <iostream>
#include <Figura.h>
#include <vector>
#include <string>

using namespace std;

Figura::Figura(string nombre,float perimetro, float area)
    {
        m_nombre = nombre;
        m_perimetro = perimetro;
        m_area = area;
    }
Figura::Figura(string nombre)
    {
        m_nombre = nombre;
    }
Figura::Figura()
    {
        m_nombre = "FiguraX";
        m_perimetro = 0;
        m_area = 0;
    }
Figura::~Figura(){} //Destructor de la clase

    //Metodfos Getters y Setters
    float Figura::obtenerPerimetro(){return m_perimetro; }
    float Figura::obtenerArea(){return m_area; }
    string Figura::obtenerNombre(){return m_nombre;}
    int Figura::obtenerId(){return m_id;}
    vector<float> Figura::obtenerCoordenadas(){return m_coordenadas;}
    float Figura::obtenerBase(){return m_base;}
    float Figura::obtenerAltura(){return m_altura;}

    void Figura::asignarArea(float area){ m_area = area;}
    void Figura::asignarNombre(string nombre){m_nombre = nombre;}
    void Figura::asignarId(int id){m_id = id;}
    void Figura::asignarBase(float base){m_base = base;}
    void Figura::asignarAltura(float altura){m_altura = altura;}
    void Figura::asignarCoordenadas(vector<float> coordenadas)
    {
        //m_coordenadas = coordenadas;
        for (int i = 0; i < coordenadas.size(); i++)
            m_coordenadas.push_back(coordenadas.at(i));
    }

    void Figura::asignarPerimetro(float perimetro)
    {
        //El programador decide como hacer la asignacion
        if(perimetro < 0)
        {
            cout<<"El perimetro no es valido"<<endl;
            m_perimetro = 0;
        }
        else
            m_perimetro = perimetro;
    }

     void Figura::imprimirDatos()
    {
        cout<<"Nombre: "<<m_nombre<< " Perimetro: "
        << m_perimetro << " Area: " << m_area<<endl;
        cout <<"Las coordenadas del vector son: "<<endl;
        for (int i = 0; i < m_coordenadas.size(); i++)
            cout << m_coordenadas.at(i)<< " ";
        cout<<endl;
    }
     int Figura::modificarId()
    {
        cout << "Ejecutando metodo de clases figuras"<<endl;
        cout << "El id modificado es: "<< m_id * 100 <<endl;
        return  m_id * 100;
    }

