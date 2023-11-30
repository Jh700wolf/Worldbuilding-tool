#include "noJugador.h"
#include <sstream>

NoJugador :: NoJugador(){
    nombre = "Personaje";
    descripcion = "Descricpion";
    biografia = "Bio";
    notas = "Info para DMs (en caso de ser necesario)";
}

NoJugador :: NoJugador(string _nombre, string _notas, string _descripcion, string _biografia, string _fecha){
    nombre = _nombre;
    descripcion = _descripcion;
    biografia = _biografia;
    notas = _notas;
    cumpleaños = Evento("", _fecha, "");

}
string NoJugador::getNotas(){
    return notas;
}
void NoJugador::setNotas(string _notas){
    notas=_notas;
}
string NoJugador :: get_njInfo(){
    stringstream aux;
    aux << "Nombre del personaje: " << nombre << endl;
    aux << "Notas" << notas << endl;
    aux << "Descripción: " << descripcion << endl;
    aux << "Su historia es: " << biografia << endl;
    return aux.str();
}
