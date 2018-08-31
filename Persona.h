#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using std::string;

class Persona{
    protected:
        string nombre;
        string id;
        int edad;
        string sexo;
        string nacionalidad;

    public:
        //constructores
        Persona();
        Persona(string,string,int,string,string);

        //getters and setters
        string getNombre();
        void setNombre(string);

        string getId();
        void setId(string);

        int getEdad();
        void setEdad(int);

        string getSexo();
        void setSexo(string);

        string getNacionalidad();
        void setNacionalidad(string);
        
        virtual void toString()=0; 

        ~Persona();


};

#endif