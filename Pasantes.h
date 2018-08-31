#ifndef PASANTES_H
#define PASANTES_H

#include "Persona.h"

class Pasantes : public Persona{

    private:
        int duracionPasantia;
        string idPasante;

    public:
        Pasantes(string,string,int,string,string,int,string);

        string getIdPasante();
        void setIdPasante(string);

        int getDuracionPasantia();
        void setDuracionPasantia(int);

        virtual void toString();

        ~Pasantes();


};

#endif