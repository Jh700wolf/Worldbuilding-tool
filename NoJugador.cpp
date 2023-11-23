#include <C:\Users\joseg\Downloads\ProyectoIntegrador\noJugador.h>
#include <sstream>

noJugador :: noJugador(){
    nombre = "Personaje";
    descripcion = "Descricpion";
    biografia = "Bio";
    notas = "Info para DMs (en caso de ser necesario)";
}

noJugador :: noJugador(string _nombre, string _notas, string _descripcion, string _biografia){
    nombre = _nombre;
    descripcion = _descripcion;
    biografia = _biografia;
    notas = _notas;

}

string noJugador :: get_njInfo(){
    stringstream aux;
    aux << "Nombre del personaje: " << nombre << endl;
    aux << "Notas" << notas << endl;
    aux << "Descripción: " << descripcion << endl;
    aux << "Su historia es: " << biografia << endl;
    return aux.str();
}
