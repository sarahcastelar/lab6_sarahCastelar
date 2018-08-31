#include "Pasantes.h"
#include <iostream>
using std::cout;
using std::endl;

Pasantes::Pasantes(string nombre, string id, int edad, string sexo, string nacionalidad, int pDuracion, string pId):Persona(nombre,id,edad,sexo,nacionalidad){
    duracionPasantia = pDuracion;
    idPasante = pId;
}

int Pasantes::getDuracionPasantia(){
    return duracionPasantia;
}

void Pasantes::setDuracionPasantia(int pDuracion){
    duracionPasantia = pDuracion;
}

string Pasantes::getIdPasante(){
    return idPasante;
}

void Pasantes::setIdPasante(string id){
    idPasante = id;
}

void Pasantes::toString(){
    cout<<"Nombre: "<<nombre<<"\n Edad: "<<edad<<"\n Duracion pasantia: "<<duracionPasantia
    <<"\n Id Pasante: "<<idPasante<<endl;
}

Pasantes::~Pasantes(){
    
}