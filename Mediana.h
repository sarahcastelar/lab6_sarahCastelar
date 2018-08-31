#ifndef MEDIANA_H
#define MEDIANA_H
#include "Empresas.h"
#include <string>
using std::string;

class Mediana : public Empresas{
    private:
        float ingresos;
        float egresos;
        int numDepartamentos;
        string rtn;
    
    public:
        Mediana(string, string, string, int, float,float,int,string);

        float getIngresos();
        void setIngresos(float);

        float getEgresos();
        void setEgresos(float);

        int getNumDepa();
        void setNumDepa(int);

        string getRtn();
        void setRtn(string);

        ~Mediana();
        virtual void toString();
};

#endif