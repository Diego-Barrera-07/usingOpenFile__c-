#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main(){
    ifstream f;
    ofstream o;
    string textoDeArchivo;

    f.open("message.dat",ios::in); 

    if(!f){
        cout << "Error: no se pudo abrir el archivo";
        exit(1);
    } 

    while(!f.eof()){
        getline(f, textoDeArchivo);
        cout << textoDeArchivo << endl;
    }

    o.open("new.dat", ios::out);

    if(o.fail()){
        cout << "No pudiste crear este archivo";
        exit(1);
    }

    o<<textoDeArchivo;
    o.close();
        
    return 0;
}



