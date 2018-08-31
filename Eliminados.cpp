#include "Eliminados.h"
#include <iostream>
using std::cout;
using std::endl;

Eliminados::Eliminados(string nombre, string id, int edad, string sexo, string nacionalidad):Persona(nombre,id,edad,sexo,nacionalidad){

}

void Eliminados::toString(){
    cout<<"Nombre: "<<nombre<<"\n Id: "<<id<<endl;
}

Eliminados::~Eliminados(){
    
}