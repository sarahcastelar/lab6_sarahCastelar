#include "Estudiante.h"
#include <string>

using std::string;
#include <iostream>
using std::cout;
using std::endl;

Estudiante::Estudiante(){

}

Estudiante::Estudiante(string nombre, string id, int edad, string sexo, string nacionalidad, float pIndice, string pCarrera, string pUniversidad, string pNumeroCuenta):Persona( nombre,  id,  edad,  sexo,  nacionalidad){
    indiceAcademico = pIndice;
    carrera = pCarrera;
    universidad = pUniversidad;
    numeroCuenta = pNumeroCuenta;
}

float Estudiante::getIndice(){
    return indiceAcademico;
}

void Estudiante::setIndice(float pIndice){
    indiceAcademico = pIndice;
}

string Estudiante::getCarrera(){
    return carrera;
}

void Estudiante::setCarrera(string pCarrera){
    carrera = pCarrera;
}

string Estudiante::getUniversidad(){
    return universidad;
}

void Estudiante::setUniversidad(string pUniversidad){
    universidad = pUniversidad;
}

string Estudiante::getNumeroCuenta(){
    return numeroCuenta;
}

void Estudiante::setNumeroCuenta(string pNumeroCuenta){
    numeroCuenta = pNumeroCuenta;
}

void Estudiante::toString(){
    cout<<"Nombre: "<<nombre<<"\n Carrera: "<<carrera<<"\n Universidad: "<<universidad<<"\n Numero cuenta: "
    <<numeroCuenta<<"Indice Academico: "<<indiceAcademico;
}

Estudiante::~Estudiante(){
    
}