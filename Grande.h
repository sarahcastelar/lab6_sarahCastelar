#ifndef GRANDE_H
#define GRANDE_H
#include "Persona.h"
#include "Empresas.h"
#include <string>
using std::string;

#include <vector>
using std::vector;

class Grande : public Empresas{
    protected:
        string vicepresidente;
        vector<Persona*> vectorProveedores;
    
    public:
        Grande(string, string, string, int, Persona*, string, Persona*);

        string getVice();
        void setVice(string);

        Persona* getProveedores(int);
        void setProveedores(Persona*);

        ~Grande();
        virtual void toString();
};

#endif