#ifndef EMPRESAS_H
#define EMPRESAS_H
#include "Persona.h"

#include <string>
using std::string;

#include <vector>
using std::vector;

class Empresas{
    protected:
        string nombreEmpresa;
        string fechaCreacion;
        string rubroEmpresa;
        int numPermiso;
        vector<Persona*> vectorTrabajadores; //lo puse personas pq pueden ser empleados o pasantes.

    public:
        Empresas(string,string,string,int, Persona*);

        string getNombreEmpresa();
        string getFechaCreacion();
        string getRubro();
        int getNumPermiso();
        Persona* getPersonas(int);

        void setNombreEmpresa(string);
        void setFechaCreacion(string);
        void setRubro(string);
        void setNumPermiso(int);
        void setPersonas(Persona*);

        virtual void toString()=0;
        ~Empresas();

};

#endif