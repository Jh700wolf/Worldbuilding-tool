#include <C:\Users\joseg\Downloads\ProyectoIntegrador\Jugador.h>
#include <sstream>

jugador :: jugador(){
    nombre = "Personaje";
    descripcion = "Descricpion";
    biografia = "Bio";
    nombreJugador = "Jugador";
    claseJugador = "Esta es su clase";
}

jugador :: jugador(string _nombre, string _nombreJugador, string _claseJugador, string _descripcion, string _biografia){
    nombre = _nombre;
    descripcion = _descripcion;
    biografia = _biografia;
    nombreJugador = _nombreJugador;
    claseJugador = _claseJugador;
}

string jugador :: get_jugadorInfo(){
    stringstream aux;
    aux << "Nombre del personaje: " << nombre << endl;
    aux << "Nombre del jugador" << nombreJugador << endl;
    aux << "Clase del jugador" << claseJugador << endl;
    aux << "Descripción: " << descripcion << endl;
    aux << "Su historia es: " << biografia << endl;
    return aux.str();
}