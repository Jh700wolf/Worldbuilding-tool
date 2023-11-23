#include "Lugar.h"
#include <sstream>

lugar :: lugar(){
    nombre = "Lugar";
    descripcion = "Añadir texto";
}

lugar :: lugar(string _nombre, string _descricpion){
    nombre = _nombre;
    descripcion = _descricpion;
}

string lugar :: get_lugarInfo(){
    stringstream aux;
    aux << "Nombre del lugar: " << nombre << endl;
    aux << "Descripción: " << descripcion << endl;
    return aux.str();
}