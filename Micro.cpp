#include "Micro.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

Micro::Micro(string nombreEmpresa, string fechaCreacion, string rubroEmpresa, int numPermiso, Persona* vectorTrabajadores, string pDueno):Empresas(nombreEmpresa,fechaCreacion,rubroEmpresa,numPermiso,vectorTrabajadores){
    dueno = pDueno;
}

string Micro::getDueno(){
    return dueno;
}

void Micro::setDueno(string pDueno){
    dueno = pDueno;
}

void Micro::toString(){
    cout<<"Nombre Empresa: "<<nombreEmpresa<<"\n Dueno de la Empresa: "<<dueno<<endl;
}

Micro::~Micro(){
    
}