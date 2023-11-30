#ifndef PERSONAJE_H_
#define PERSONAJE_H_

#include "Evento.cpp"
#include <iostream>
#include <String>
#include <Vector>
#include <sstream>

using namespace std;

class Personaje{
    protected:
        string nombre;
        string descripcion;
        string biografia;
        Evento cumpleaños;
    
    public:
        Personaje();
        Personaje(string,string,string,string);
        string getNombrePersonaje()const;
        string getDescripcionPersonaje();
        string getBiografiaPersonaje();
        void setNombrePersonaje(string);
        void setDescripcionPersonaje(string);
        void setBiografiaPersonaje(string);

};



#endif
