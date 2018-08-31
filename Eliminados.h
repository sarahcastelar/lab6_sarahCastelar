#ifndef ELIMINADOS_H
#define ELIMINADOS_H
#include "Persona.h"

class Eliminados : public Persona{
    public:
        Eliminados(string, string, int, string, string);

        virtual void toString();

        ~Eliminados();

};

#endif