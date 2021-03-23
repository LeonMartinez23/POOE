#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

///---------El TRIANGULO---------///
class Triangulo: public Figura
{
public:
    int m_id;
    float m_base;
    float m_altura;
    Triangulo(int id);
    Triangulo();
    ~Triangulo();
    void imprimirDatos();
    int modificarId();
};

#endif // TRIANGULO_H_INCLUDED
