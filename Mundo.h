#ifndef MUNDO_H_
#define MUNDO_H_

#include <iostream>
#include <String>
#include <Vector>
#include <C:\Users\joseg\Downloads\ProyectoIntegrador\Evento.cpp>
#include <C:\Users\joseg\Downloads\ProyectoIntegrador\Lugar.cpp>
#include <C:\Users\joseg\Downloads\ProyectoIntegrador\Jugador.cpp>
#include <C:\Users\joseg\Downloads\ProyectoIntegrador\NoJugador.cpp>


using namespace std;

class mundo
{
    protected:
        string nombre;
        string descripcionBasica;
        vector <evento> eventos;
        vector <lugar> lugares;
        vector <jugador> jugadores;
        vector <noJugador> personajes;
        
    public:
        mundo();
        mundo(string nombre, string descripcionBasica);
        string get_mundoInfo();
        void set_descripcion(string descripcion);
        void set_nombre(string nombre);
        void añadirEvento(evento eventoAgregado);
        void añadirLugar(lugar lugarAgregado);
        void añadirJugador(jugador jugadorAgregado);
        void añadirPersonaje(noJugador njAgregado);
        




};

#endif