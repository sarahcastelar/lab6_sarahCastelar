#include "Empleados.h"
#include <iostream>

using std::cout;
using std::endl;

Empleados::Empleados(string nombre, string id, int edad, string sexo, string nacionalidad, float pSalario, string pIdEmpleado):Persona(string nombre, string id, int edad, string sexo, string nacionalidad){
    salario = pSalario;
    idEmpleado = pIdEmpleado;
}

float Empleados::getSalario(){
    return salario;
}

void Empleados::setSalario(float pSalario){
    salario = pSalario;
}

string Empleados::getIdEmpleado(){
    return idEmpleado;
}

void Empleados::setIdEmpleado(string id){
    idEmpleado = id;
}

void Empleados::toString(){
    cout<<"Nombre: "<<nombre<<"\n Edad: "<<edad<<"\n Salario: "<<salario
    <<"\n Id Empleado: "<<idEmpleado<<endl;
}

Empleados::~Empleados(){
    
}