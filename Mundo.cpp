#ifndef MUNDO_CPP_
#define MUNDO_CPP_
#include "Mundo.h"
#include <sstream>

Mundo::Mundo(){
    nombre="Mundo";
    descripcionBasica="Añadir texto";
}

Mundo::Mundo(string _nombre, string _descripcionBasica){
    nombre = _nombre;
    descripcionBasica = _descripcionBasica;
}
string Mundo::getNombre(){
    return nombre;
}
string Mundo::getDescripcionBasica(){
    return descripcionBasica;
}
string Mundo:: get_mundoInfo(){
    stringstream aux;
    aux << "Nombre: " << nombre << endl;
    aux << "Descripcion general: " << descripcionBasica << endl;
    aux << "Eventos: " << endl;
    for (const Evento& evento : eventos){
        aux << "Evento:" << endl;
        aux << "Nombre del evento: " << evento.getNombre() << endl;
    }
    aux << "Lugares" << endl;
    for (const Lugar& lugar : lugares){
        aux << "Lugar:" << endl;
        aux << "Nombre del evento: " << lugar.getNombre() << endl;
    }
    aux << "Jugadores" << endl;
    for (const Jugador& jugador : jugadores){
        aux << "Personaje Jugable" << endl;
        aux << "Nombre del evento: " << jugador.getNombrePersonaje() << endl;
    }
    aux << "NPCs: " << endl;
    for (const NoJugador& noJugador : personajes){
        aux << "NPC: " << endl;
        aux << "Nombre del evento: " << noJugador.getNombrePersonaje() << endl;     
    }
    return aux.str();
}
void Mundo :: set_nombre(string _nombre){
    nombre = _nombre;
}

void Mundo :: set_descripcion(string _descripcion){
    descripcionBasica = _descripcion;
}
void Mundo :: añadirEvento(Evento _evento){
    eventos.push_back(_evento);
}

void Mundo :: añadirLugar(Lugar _lugar){
    lugares.push_back(_lugar);
}

void Mundo :: añadirJugador(Jugador _jugador){
    jugadores.push_back(_jugador);
}

void Mundo :: añadirPersonaje(NoJugador _noJugador){
    personajes.push_back(_noJugador);
}
#endif
