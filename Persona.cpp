#include "Persona.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;

Persona::Persona(){
    nombre = "sarah";
    id = "0101";
    edad = 19;
    sexo = "femenino";
    nacionalidad = "hondurena";
}

Persona::Persona(string pNombre, string pId, int pEdad, string pSexo, string pNacionalidad){
    nombre = pNombre;
    id = pId;
    edad = pEdad;
    sexo = pSexo;
    nacionalidad = pNacionalidad;
}

string Persona::getNombre(){
    return nombre;
}

void Persona::setNombre(string pNombre){
    nombre = pNombre;
}

string Persona::getId(){
    return id;
}

void Persona::setId(string pId){
    id = pId;
}

int Persona::getEdad(){
    return edad;
}

void Persona::setEdad(int  pEdad){
    edad = pEdad;
}

string Persona::getNacionalidad(){
    return nacionalidad;
}

void Persona::setNacionalidad(string pNacionalidad){
    nacionalidad = pNacionalidad;
}

string Persona::getSexo(){
    return sexo;
}

void Persona::setSexo(string pSexo){
    sexo = pSexo;
}

Persona::~Persona(){
    cout<<"eliminando memoria persona con nombre: "<<nombre<<"\n";
}

