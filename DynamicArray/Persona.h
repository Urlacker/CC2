#include <iostream>
#ifndef PERSONA_H_
#define PERSONA_H_

class Persona{
    private:
        int edad;
        std::string nombre;
        std::string apellido;
    public:
        Persona(){
            this->edad = -1;
            this->nombre = "";
            this->apellido = "";
        }
        Persona(int edad,std::string nombre, std::string apellido){
            this->edad = edad;
            this->nombre = nombre;
            this->apellido = apellido;
        }
        friend std::ostream& operator<<(std::ostream& output, const Persona& persona){
            output<<"Nombre y apellidos: "<<persona.nombre<<" "<<persona.apellido<<"\n"
                  <<"Edad: "<<persona.edad<<"\n";
            return output;
        }
};

#endif