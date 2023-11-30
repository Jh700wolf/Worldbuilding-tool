#ifndef MUNDO_H_
#define MUNDO_H_

#include <iostream>
#include <String>
#include <Vector>
#include <fstream>
#include "Evento.cpp"
#include "Lugar.cpp"
#include "Jugador.cpp"
#include "NoJugador.cpp"
#include "Personaje.cpp"


using namespace std;

class Mundo
{
    protected:
        string nombre;
        string descripcionBasica;
        vector <Evento> eventos;
        vector <Lugar> lugares;
        vector <Jugador> jugadores;
        vector <NoJugador> personajes;
        
    public:
        Mundo();
        Mundo(string nombre, string descripcionBasica);
        string get_mundoInfo();
        string getNombre();
        string getDescripcionBasica();
        void set_descripcion(string descripcion);
        void set_nombre(string nombre);
        void añadirEvento(Evento eventoAgregado);
        void añadirLugar(Lugar lugarAgregado);
        void añadirJugador(Jugador jugadorAgregado);
        void añadirPersonaje(NoJugador njAgregado);

        




};

#endif
