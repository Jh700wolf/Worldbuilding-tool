#include "ManejadorArchivos.h"
#include <sstream>
using namespace std;

Manejador::Manejador(){
}
void Manejador::crearArchivo(Mundo mundonuevo){
    ofstream Archivo("MisMundos.txt");
    Archivo << mundonuevo.get_mundoInfo();
    Archivo.close();
}