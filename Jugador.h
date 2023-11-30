#ifndef JUGADOR_H_
#define JUGADOR_H_

#include <iostream>
#include <String>
#include <Vector>
#include <sstream>
#include "Personaje.h"

class Jugador:public Personaje{
    private:
        string nombreJugador;
        string claseJugador;
    public:
        Jugador();
        Jugador(string nombre, string nombreJugador, string claseJugador, string descripcion, string biografia, string fecha);
        string getNombreJugador();
        string getClaseJugador();
        void setNombreJugador(string);
        void setClaseJugador(string);
        string get_jugadorInfo();
};

#endif
