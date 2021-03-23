#include <iostream>
using namespace std;

class Figura
{
private: //Mecanismo de ocultamiento de datos (hidding data)
    string m_nombre;
    float m_perimetro;
    float m_area;
    float m_base;
    float m_altura;
    float m_radio;

public: //Interfaz para comunicaicon con otros programas
    //Existen 2^n posibles constructores
    // con N= # de atributos
    Figura(string nombre,float perimetro, float area,float base,float altura,float radio)
    {
        m_nombre = nombre;
        m_perimetro = perimetro;
        m_area = area;
        m_base = base;
        m_altura = altura;
        m_radio = radio;
    }
    Figura(string nombre)
    {
        m_nombre = nombre;
    }
    Figura()
    {
        m_nombre = "FiguraX";
        m_perimetro = 0;
        m_area = 0;
        m_base = 0;
        m_altura = 0;
        m_radio = 0;
    }
    ~Figura(){} //Destructor de la clase

    //Metodfos Getters y Setters
    float obtenerPerimetro(){return m_perimetro; }
    float obtenerArea(){return m_area; }
    string obtenerNombre(){return m_nombre;}
    float obtenerBase(){return m_base;}
    float obtenerAltura(){return m_altura;}
    float obtenerRadio(){return m_radio;}

    void asignarPerimetro(float perimetro)
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
    void asignarArea(float area){ m_area = area;}
    void asignarNombre(string nombre){m_nombre = nombre;}
    void asignarAltura(float altura){m_altura = altura;}
    void asignarRadio(float radio){m_radio = radio;}
    void asignarBase(float base){m_base = base;}
    void imprimirDatos()
    {
        cout<<"Nombre: "<<m_nombre<< " Perimetro: "
        << m_perimetro << " Area: " << m_area<<endl;
    }
};
////El Rectangulo
//Implemenya Herencia
class Rectangulo: public Figura
{
public:
    int m_id;
    float m_ancho;
    float m_altura;

    Rectangulo(int id){m_id = id;}
    Rectangulo(){}
    ~Rectangulo(){}
    void imprimirDatos()
    {
        cout<<"Id: "<< m_id<<" Nombre: "<<obtenerNombre()<< " Perimetro: "
        << obtenerPerimetro() << " Altura: " << obtenerArea()<<endl;
    }
};

////El triangulo
class Triangulo: public Figura
{
public:
    int m_id;
    float m_base;
    float m_altura;

    Triangulo(int id){m_id = id;}
    Triangulo(){}
    ~Triangulo(){}
    void imprimirDatos()
    {
        cout<<"Id: "<< m_id<<" Nombre: "<<obtenerNombre()<< " Base: "
        << obtenerBase() << " Altura: " << obtenerAltura()<<endl;
    }
};

////El triangulo
class Circulo: public Figura
{
public:
    int m_id;
    float m_base;
    float m_altura;
    float m_radio;

    Circulo(int id){m_id = id;}
    Circulo(){}
    ~Circulo(){}
    void imprimirDatos()
    {
        cout<<"Id: "<< m_id<<" Nombre: "<<obtenerNombre()<< " Radio: "
        << obtenerRadio() << " Area: "<<obtenerArea()<<endl;
    }
};

int main()
{
    //Definiendo objetos de la clase figura
    Figura fig1 = Figura("Figura 1");
    fig1.asignarPerimetro(5);
    fig1.asignarArea(10);
    fig1.imprimirDatos();

    Figura fig2 = Figura ();
    fig2.imprimirDatos();

    Rectangulo rec1= Rectangulo(1);
    rec1.asignarNombre("Rectangulo 1");
    rec1.imprimirDatos();

    Triangulo tri1 = Triangulo(2);
    tri1.asignarNombre("Triangulo");
    tri1.asignarBase(5);
    tri1.asignarAltura(8);
    tri1.imprimirDatos();

    Circulo cir1 = Circulo(3);
    cir1.asignarNombre("Circulo");
    cir1.asignarRadio(6);
    cir1.asignarArea(113.09);
    cir1.imprimirDatos();

    return 0;
}
