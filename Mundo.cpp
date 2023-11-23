#include "Mundo.h"
#include <sstream>

mundo::mundo(){
    nombre="Mundo";
    descripcionBasica="Añadir texto";
}

mundo::mundo(string _nombre, string _descripcionBasica){
    nombre = _nombre;
    descripcionBasica = _descripcionBasica;
}

string mundo :: get_mundoInfo(){
    stringstream aux;
    aux << "Nombre: " << nombre << endl;
    aux << "Descripcion general: " << descripcionBasica << endl;
    return aux.str();
}

void mundo :: set_nombre(string _nombre){
    nombre = _nombre;
}

void mundo :: set_descripcion(string _descripcion){
    descripcionBasica = _descripcion;
}
void mundo :: añadirEvento(evento _evento){
    eventos.push_back(_evento);
}

void mundo :: añadirLugar(lugar _lugar){
    lugares.push_back(_lugar);
}

void mundo :: añadirJugador(jugador _jugador){
    jugadores.push_back(_jugador);
}

void mundo :: añadirPersonaje(noJugador _noJugador){
    personajes.push_back(_noJugador);
}