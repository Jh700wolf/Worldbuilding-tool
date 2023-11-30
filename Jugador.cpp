#include "Jugador.h"
#include <sstream>

Jugador :: Jugador(){
    nombre = "Personaje";
    descripcion = "Descricpion";
    biografia = "Bio";
    nombreJugador = "Jugador";
    claseJugador = "Esta es su clase";
}

Jugador :: Jugador(string _nombre, string _nombreJugador, string _claseJugador, string _descripcion, string _biografia, string _fecha){
    nombre = _nombre;
    descripcion = _descripcion;
    biografia = _biografia;
    nombreJugador = _nombreJugador;
    claseJugador = _claseJugador;
    cumpleaños= Evento("",_fecha,"");
}
string Jugador::getNombreJugador(){
    return nombreJugador;
}
string Jugador::getClaseJugador(){
    return claseJugador;
}
void Jugador::setNombreJugador(string _nombreJugador){
    nombreJugador=_nombreJugador;
}
void Jugador::setClaseJugador(string _claseJugador){
    claseJugador=_claseJugador;
}
string Jugador :: get_jugadorInfo(){
    stringstream aux;
    aux << "Nombre del personaje: " << nombre << endl;
    aux << "Nombre del jugador" << nombreJugador << endl;
    aux << "Clase del jugador" << claseJugador << endl;
    aux << "Descripción: " << descripcion << endl;
    aux << "Su historia es: " << biografia << endl;
    return aux.str();
}
