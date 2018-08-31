#include "Grande.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

Grande::Grande(string nombreEmpresa, string fechaCreacion, string rubroEmpresa, int numPermiso, Persona* vectorTrabajadores, string pVice, Persona* vProveedores):Empresas(nombreEmpresa,fechaCreacion,rubroEmpresa,numPermiso,vectorTrabajadores){
    vicepresidente = pVice;
    vectorProveedores.push_back(vProveedores);
}

string Grande::getVice(){
    return vicepresidente;
}

void Grande::setVice(string vicee){
    vicepresidente = vicee;
}

Persona* Grande::getProveedores(int n){
    return vectorProveedores[n];
}

void Grande::setProveedores(Persona* pro){
    vectorProveedores.push_back(pro);
}

void Grande::toString(){
    cout<<"Nombre Empresa: "<<nombreEmpresa<<"\n Vice Presidente de la Empresa: "<<vicepresidente<<endl;
}

Grande::~Grande(){
    
}