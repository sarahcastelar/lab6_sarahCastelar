#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"

class Estudiante : public Persona{

    private:
        float indiceAcademico;
        string carrera;
        string universidad;
        string numeroCuenta;
        

    public:
        Estudiante();
        Estudiante(string,string,int,string,string,float,string,string,string);

        float getIndice();
        void setIndice(float);

        string getCarrera();
        void setCarrera(string);

        string getUniversidad();
        void setUniversidad(string);

        string getNumeroCuenta();
        void setNumeroCuenta(string);

        virtual void toString();

        ~Estudiante();




};

#endif