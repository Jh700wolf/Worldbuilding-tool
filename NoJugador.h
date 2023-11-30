#ifndef NOJUGADOR_H_
#define NOJUGADOR_H_

#include <iostream>
#include <String>
#include <Vector>
#include <sstream>
#include "Personaje.h"

class NoJugador:public Personaje{
    private:
        string notas;
    public:
        NoJugador();
        NoJugador(string nombre, string notas, string descripcion, string biografia, string fecha);
        string getNotas();
        void setNotas(string);
        string get_njInfo();

};

#endif
