#include "Empresas.h"

Empresas::Empresas(string pNombreEmpresa, string pFecha, string pRubro, int pNumPermiso, Persona* vPersonas){
    nombreEmpresa = pNombreEmpresa;
    fechaCreacion = pFecha;
    rubroEmpresa = pRubro;
    numPermiso = pNumPermiso;
    vectorTrabajadores.push_back(vPersonas);
}

string Empresas::getFechaCreacion(){
    return fechaCreacion;
}

string Empresas::getNombreEmpresa(){
    return nombreEmpresa;
}

int Empresas::getNumPermiso(){
    return numPermiso;
}

Persona* Empresas::getPersonas(int n){
    return vectorTrabajadores[n];
}

string Empresas::getRubro(){
    return rubroEmpresa;
}

void Empresas::setFechaCreacion(string fechaa){
    fechaCreacion = fechaa;
}

void Empresas::setNombreEmpresa(string name){
    nombreEmpresa = name;
}


/*void Bodega::setIngredientes(Ingredientes* ingredientes){
    vectorIngredientes.push_back(ingredientes);
}*/

void Empresas::setPersonas(Persona* personaas){
    vectorTrabajadores.push_back(personaas);
}

void Empresas::setRubro(string r){
    rubroEmpresa = r;
}

Empresas::~Empresas(){
    
}