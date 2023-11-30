#include "Lugar.h"
#include <sstream>

Lugar :: Lugar(){
    nombre = "Lugar";
    descripcion = "Añadir texto";
}

Lugar :: Lugar(string _nombre, string _descricpion){
    nombre = _nombre;
    descripcion = _descricpion;
}
string Lugar :: getNombre()const{
    return nombre;
}
string Lugar :: getDescripcion(){
    return descripcion;
}
void Lugar :: setNombre(string _nombre){
    nombre=_nombre;
}
void Lugar :: setDescripcion(string _descripcion){
    descripcion=_descripcion;
}
string Lugar :: getLugarInfo(){
    stringstream aux;
    aux << "Nombre del lugar: " << nombre << endl;
    aux << "Descripción: " << descripcion << endl;
    return aux.str();
}
