#ifndef FIGURA_H
#define FIGURA_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Figura
{
private:
    string m_nombre;
    float m_perimetro;
    float m_area;
    int m_id;
    vector <float> m_coordenadas;
    float m_base;
    float m_altura;

public:
    Figura(string nombre,float perimetro, float area);
    Figura(string nombre);
    Figura();
    ~Figura();
    float obtenerPerimetro();
    float obtenerArea();
    string obtenerNombre();
    int obtenerId();
    vector<float> obtenerCoordenadas();
    float obtenerBase();
    float obtenerAltura();

    void asignarArea(float area);
    void asignarNombre(string nombre);
    void asignarId(int id);
    void asignarBase(float base);
    void asignarAltura(float altura);
    void asignarCoordenadas(vector<float> coordenadas);
    void asignarPerimetro(float perimetro);
    virtual void imprimirDatos();
    virtual int modificarId();
};

#endif
