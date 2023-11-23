#include "Evento.h"
#include <sstream>

evento :: evento(){
    nombre = "Evento";
    fecha = "0/0/0";
    descripcion = "Añadir texto";
}

evento :: evento(string _nombre, string _fecha, string _descripcion){
    nombre = _nombre;
    fecha = _fecha;
    descripcion = _descripcion;
}

string evento :: get_eventoInfo(){
    stringstream aux;
    aux << "Nombre del evento: " << nombre << endl;
    aux << "Fecha: " << fecha << endl;
    aux << "Descripción: " << descripcion << endl;
    return aux.str();
}