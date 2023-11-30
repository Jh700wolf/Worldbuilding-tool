#include "Personaje.h"
#include "Evento.h"
#include <sstream>

Personaje :: Personaje(){
    nombre="",
    descripcion="";
    biografia="";
}
Personaje::Personaje(string _nombre, string _descripcion, string _biografia,string _fecha){
    nombre=_nombre;
    descripcion=_descripcion;
    biografia=_biografia;
    cumpleaños= Evento("",_fecha,"");
}
string Personaje::getDescripcionPersonaje(){
    return descripcion;
}
string Personaje::getNombrePersonaje()const{
    return nombre;
}
string Personaje::getBiografiaPersonaje(){
    return biografia;
}
void Personaje::setNombrePersonaje(string _nombre){
    nombre = _nombre;
}
void Personaje::setDescripcionPersonaje(string _descripcion){
    descripcion=_descripcion;
}
void Personaje::setBiografiaPersonaje(string _biografia){
    biografia=_biografia;
}