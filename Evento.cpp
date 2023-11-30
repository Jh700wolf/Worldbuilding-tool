#ifndef EVENTO_CPP_
#define EVENTO_CPP_
#include "Evento.h"
#include <sstream>

Evento :: Evento(){
    nombre = "Evento";
    fecha = "0/0/0";
    descripcion = "Añadir texto";
}

Evento :: Evento(string _nombre, string _fecha, string _descripcion){
    nombre = _nombre;
    fecha = _fecha;
    descripcion = _descripcion;
}

string Evento :: getNombre() const{
    return nombre;
}
string Evento :: getFecha(){
    return fecha;
}
string Evento :: getDescripcion(){
    return descripcion;
}
void Evento :: setNombre(string _nombre){
    nombre = _nombre;
}
void Evento :: setFecha(string _fecha){
    fecha = _fecha;
}
void Evento :: setDescripcion(string _descripcion){
    descripcion = _descripcion;
}
string Evento :: getEventoInfo(){
    stringstream aux;
    aux << "Nombre del evento: " << nombre << endl;
    aux << "Fecha: " << fecha << endl;
    aux << "Descripción: " << descripcion << endl;
    return aux.str();
}
#endif
