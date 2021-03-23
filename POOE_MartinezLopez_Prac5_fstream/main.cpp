#include <iostream>
#include <fstream> //Leer y escribir archivos

using namespace std;

int main(){

    ofstream fout("miPrimerArchivo.txt"); //Lamando al constructor del objeto fout

    fout <<"Primera linea"<<endl;
    fout <<"2da linea"<<endl;
    fout <<"3da linea"<<endl;
    fout <<"123.123"<<endl;
    fout<<"Tambien escribe esto"<<endl;
    fout.close();

    fout.open("miPrimerArchivo.txt",fstream::app); //app es un atributo que pertenece a la clase fstream
    fout <<"Cuarta linea linea"<<endl;
    fout <<"Quinta linea"<<endl;
    fout <<"6a linea"<<endl;
    fout.close();

    //Leyendo informacion del archivo
    ifstream fin("miSegundoArchivo.txt");

    string line;
    int i= 0;
    while (getline(fin,line))
      cout<<"line"<< i++ <<":"<<line<<endl;
    //fout.close();
    fin.close();

    return 0;
}
