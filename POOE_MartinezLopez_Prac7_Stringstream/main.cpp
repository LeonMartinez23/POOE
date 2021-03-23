#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

//Prototipo de la funcion -> No requiere especificar el nombre de los parametros
vector<string> split(const string &,char);

int main()
{
    string line = "34.1,2.0,33.45,1234,9876,,4,5,6,10,1,2,3,4,5,6";

    cout<<"line 1: " <<line<<endl;
    vector<string> tokens = split(line,',');

    cout<<"hay "<<tokens.size()<<" tokens"<<endl;
    cout<<"Se pueden guardar hasta"<<tokens.capacity()<<endl;

    tokens.push_back("Un numerote");
    cout<<"hay ahora "<<tokens.size()<<endl;
    size_t i;
    for(i=0;i<tokens.size();i++)
        cout<<tokens.at(i)<<endl;/////////////

    template<typename out>//"Out" tipo de dato
    void split(const string &s, char delim, Out result){
        stringstream ss(s); //ss es un bufer
        string item;
        while(getline(ss,item,delim)){
            *(result++)=item;
            //Se asigna un pedazo de la cadena
            //en el siguiente posicion del contenedor
            //El contenedor es administrado por su contador
        }
    }

    vector<string> split(const string &s, char delim){
        vector<string> elemes;
        split(s,delim back_inserter(elemes));
        return elemes;
    }
    return 0;
}
