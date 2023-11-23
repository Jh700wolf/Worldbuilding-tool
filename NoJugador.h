#ifndef NOJUGADOR_H_
#define NOJUGADOR_H_

#include <iostream>
#include <String>
#include <Vector>
#include <sstream>
#include <C:\Users\joseg\Downloads\ProyectoIntegrador\Personaje.h>

class noJugador:public personaje{
    private:
        string notas;
    public:
        noJugador();
        noJugador(string nombre, string notas, string descripcion, string biografia);
        string get_njInfo();

};

#endif