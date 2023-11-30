#ifndef EVENTO_H_
#define EVENTO_H_

#include <iostream>
#include <String>
#include <Vector>
#include <sstream>

using namespace std;

class Evento{
    private:
        string nombre;
        string fecha;
        string descripcion;
    
    public:
        Evento();
        Evento(string nombre, string fecha, string descripcion);
        string getEventoInfo();
        string getNombre() const;
        string getFecha();
        string getDescripcion();
        void setNombre(string);
        void setFecha(string);
        void setDescripcion(string);
    
};

#endif
