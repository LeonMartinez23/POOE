#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

class Circulo : public Figura
{
private:
    float m_radio;
public:
    Circulo(int id, float radio);
    ~Circulo();
    float obtenerRadio();
    void asignarRadio(float radio);
    void imprimirDatos();
    int modificarId();
};

#endif // CIRCULO_H_INCLUDED
