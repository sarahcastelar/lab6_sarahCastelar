#ifndef MICRO_H
#define MICRO_H
#include "Empresas.h"
#include <string>
using std::string;

class Micro : public Empresas{
    protected:
        string dueno;
    
    public:
        Micro(string, string, string, int, string);

        string getDueno();
        void setDueno(string);

        ~Micro();
        virtual void toString();
};

#endif