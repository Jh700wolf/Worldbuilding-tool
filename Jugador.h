#ifndef JUGADOR_H_
#define JUGADOR_H_

#include <iostream>
#include <String>
#include <Vector>
#include <sstream>
#include <C:\Users\joseg\Downloads\ProyectoIntegrador\Personaje.h>

class jugador:public personaje{
    private:
        string nombreJugador;
        string claseJugador;
    public:
        jugador();
        jugador(string nombre, string nombreJugador, string claseJugador, string descripcion, string biografia);
        string get_jugadorInfo();
};

#endif