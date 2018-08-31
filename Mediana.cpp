#include "Mediana.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

Mediana::Mediana(string nombreEmpresa, string fechaCreacion, string rubroEmpresa, int numPermiso, float pIngresos, float pEgresos, int pNumDep, string pRtn):Empresas(nombreEmpresa,fechaCreacion,rubroEmpresa,numPermiso){
    ingresos = pIngresos;
    egresos = pEgresos;
    numDepartamentos = pNumDep;
    rtn = pRtn;
}

float Mediana::getIngresos(){
    return ingresos;
}

void Mediana::setIngresos(float i){
    ingresos = i;
}

float Mediana::getEgresos(){
    return egresos;
}

void Mediana::setEgresos(float i){
    egresos = i;
}

int Mediana::getNumDepa(){
    return numDepartamentos;
}

void Mediana::setNumDepa(int i){
    numDepartamentos = i;
}

string Mediana::getRtn(){
    return rtn;
}

void Mediana::setRtn(string i){
    rtn = i;
}

void Mediana::toString(){
    cout<<"Nombre Empresa: "<<nombreEmpresa<<"\n RTN de la Empresa: "<<rtn<<endl;
}

Mediana::~Mediana(){
    
}