#ifndef EMPLEADOS_H
#define EMPLEADOS_H
#include "Persona.h"

class Empleados : public Persona{
    private:
        float salario;
        string idEmpleado;
    
    public:
        Empleados(string,string,int,string,string,float,string);

        float getSalario();
        void setSalario(float);

        string getIdEmpleado();
        void setIdEmpleado(string);

        virtual void toString();

        ~Empleados();



};

#endif