///------------EJERCICIO  1-------------///////
#include <iostream>

using namespace std;

int main()
{
   //Variables
   float valores[5];
   float aux;

   cout << "Introduzca 5 numeros reales" << endl;

   //uso de ciclo cuando deseamos poner muchos numeros
   for (int i=0; i < 5 ; i++)
        cin >> valores[i];

   //vector desordenado
   cout << "El vector desordenado es:" << endl;

   for (int i=0; i < 5 ; i++)
      cout << valores [i] << "  ";
   cout << endl;

   //Algoritmo de ordenamiento por burbuja
    for (int i=0; i < 4 ; i++)
        for (int j=i+1; j < 5 ; j++)
            if (valores [i] > valores [j])
            {
                //intercambio
                aux = valores[i];
                valores[i]= valores[j];
                valores[j]=aux;
            }
    //Vector ordenado
    cout << "El vector ordenado es:" << endl;
    for(int i=0; i<5 ; i++)
        cout << valores[i] << " ";
    cout << endl;

    return 0;
}

///----------------EJERCICIO 2---------------///////
#include <iostream>
#include <fstream> //Leer y escribir archivos

using namespace std;

int main()
{
   //Creando archivo con mis datos
   ofstream fout("misdatos.txt");
   fout <<"Leon Felipe Martinez Lopez"<<endl;
   fout <<"427362"<<endl;
   fout <<"leongta@protonmail.com"<<endl;
   fout.close();

   //leyendo informacion del archivo
   ifstream fin("misdatos.txt"); //ifstream tomar como origen el archivo

   string cadena;
   int i=0;
   while( getline(fin,cadena) )
   {
      //Creo el segundo archvo con mis datos modificados
      ofstream fout("misdatos_modificados.txt");
      //Para guardar los datos dentro de misdatos_modificados.txt
      fout << cadena << "_DCI" << endl;
      //Para checarlo en la terminal
      cout << cadena << "_DCI" << endl;
   }
   fin.close();
   fout.close();

   return 0;
}



///----------------EJERCICIO 3---------------///////
#include <iostream>

using namespace std;

class Vehiculo
{
private:
   string m_placas;
   string m_modelo;
   int m_ano;

public:
   Vehiculo(string placas,string modelo, int ano)
   {
        m_placas = placas;
        m_modelo = modelo;
        m_ano = ano;
   }
   //Por Default
   Vehiculo()
   {
      m_placas = "XXX";
      m_modelo = "XXX";
      m_ano = 0;
   }
   //Destructor
   ~Vehiculo(){}

   //Metodfos Getters y Setters
   string obtenerPlacas(){return m_placas; }
   string obtenerModelo(){return m_modelo; }
   int obtenerAno(){return m_ano;}

   void asignarPlacas(string placas){ m_placas = placas;}
   void asignarModelo(string modelo){m_modelo = modelo;}
   void asignarAno(int ano){m_ano = ano;}
   void mostrarDatos()
   {
      cout << "Placas: "<< m_placas << " Modelo: " << m_modelo << " Ano: " << m_ano <<endl;
   }
   void encender()
   {
      cout << "Enciendo Vehículo" <<endl;
   }
};

//Implementando herencia
class Compacto:public Vehiculo
{
private:
   string m_placas;
   int m_cilindros;
public:
   Compacto(string placas,string modelo, int ano,int cilindros)
   {
        m_placas = placas;
        m_cilindros = cilindros;
        asignarPlacas(placas);
   }

   //Destructor
   ~Compacto(){}

   //Metodfos Getters y Setters
    string obtenerPlacas(){return m_placas;}
    int obtenerCilindros(){return m_cilindros;}

   void asignarCilindros(int cilindros){m_cilindros = cilindros;}
   void asignarPlacas(string placas){m_placas = placas;}
   void mostrarDatos()
    {
        cout<<"Placas: "<< obtenerPlacas()
        << "Modelo :" <<obtenerModelo()
        << "Ano :" <<obtenerAno()
        << "Numero de Cilindros: " <<obtenerCilindros()
        <<endl;
    }

};

int main()
{

   //Definiendo objetos de la clase Vehiculo
    Vehiculo miAuto= Vehiculo();
    miAuto.asignarPlacas("GO4IT2U");
    miAuto.asignarModelo("BSMART");
    miAuto.asignarAno(2018);
    miAuto.mostrarDatos();

   return 0;
}


