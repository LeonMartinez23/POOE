#include <iostream>
using namespace std;

class Figura
{
private: //Mecanismo de ocultamiento de datos (hidding data)
    string m_nombre;
    float m_perimetro;
    float m_area;

public: //Interfaz para comunicaicon con otros programas
    //Existen 2^n posibles constructores
    // con N= # de atributos
    Figura(string nombre,float perimetro, float area)
    {
        m_nombre = nombre;
        m_perimetro = perimetro;
        m_area = area;
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
    }
    ~Figura(){} //Destructor de la clase

    //Metodfos Getters y Setters
    float obtenerPerimetro(){return m_perimetro; }
    float obtenerArea(){return m_area; }
    string obtenerNombre(){return m_nombre;}

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
    void imprimirDatos()
    {
        cout<<"Nombre: "<<m_nombre<< " Perimetro: " 
        << m_perimetro << " Area: " << m_area<<endl;
    }
};

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
        << obtenerPerimetro() << " Area: " << obtenerArea()<<endl;      
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


    return 0;
}