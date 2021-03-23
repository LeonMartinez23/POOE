#include <iostream>
#include <vector>

using namespace std;

class Figura
{
private: //Mecanismo de ocultamiento de datos (hidding data)
    string m_nombre;
    float m_perimetro;
    float m_area;
    int m_id;
    vector <float> m_coordenadas;

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
    int obtenerId(){return m_id;}
    vector<float> obtenerCoordenadas(){return m_coordenadas;}

    void asignarArea(float area){ m_area = area;}
    void asignarNombre(string nombre){m_nombre = nombre;}
    void asignarId(int id){m_id = id;}
    void asignarCoordenadas(vector<float> coordenadas)
    {
        //m_coordenadas = coordenadas;
        for (int i = 0; i < coordenadas.size(); i++)
            m_coordenadas.push_back(coordenadas.at(i));
    }

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

    void imprimirDatos()
    {
        cout<<"Nombre: "<<m_nombre<< " Perimetro: "
        << m_perimetro << " Area: " << m_area<<endl;
        cout <<"Las coordenadas del vector son: "<<endl;
        for (int i = 0; i < m_coordenadas.size(); i++)
            cout << m_coordenadas.at(i)<< " ";
        cout<<endl;
    }
};

//Implemenya Herencia
class Rectangulo: public Figura
{
public:

    float m_ancho;
    float m_altura;

    Rectangulo(int id){asignarId(id);}
    Rectangulo(){}
    ~Rectangulo(){}
    void imprimirDatos()
    {
        cout<<"Id: "<< obtenerId()<<" Nombre: "<<obtenerNombre()<< " Perimetro: "
        << obtenerPerimetro() << " Area: " << obtenerArea()<<endl;
    }
};
/////////////-------------------EL CIRCULO
class Circulo : public Figura
{
private:
    float m_radio;
public:
    Circulo(int id, float radio)
    {
        m_radio = radio;
        asignarId(id);
    }
    ~Circulo(){}
    float obtenerRadio(){return m_radio;}
    void asignarRadio(float radio){m_radio = radio;}
    void imprimirDatos()
    {
        cout<<"Id: "<< obtenerId()<<" Nombre: "<<obtenerNombre()<< " Perimetro: "
        << obtenerPerimetro() << " Area: " << obtenerArea()
        <<" Radio: "<<m_radio<<endl;
    }

};


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
    circ1.imprimirDatos();

    cout <<"________________________________"<<endl;
    cout <<"Imprimiendo figuras desde vector"<<endl;
    cout <<"________________________________"<<endl;

    vector<Figura *> figuras;
    figuras.push_back(&fig1);
    figuras.push_back(&fig2);
    figuras.push_back(&rec1);
    figuras.push_back(&circ1);

    for(int i=0;i<figuras.size();i++)
        figuras.at(i)->imprimirDatos();

    return 0;
}
