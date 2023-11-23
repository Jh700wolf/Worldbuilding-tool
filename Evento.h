#ifndef EVENTO_H_
#define EVENTO_H_

#include <iostream>
#include <String>
#include <Vector>
#include <sstream>

using namespace std;

class evento{
    private:
        string nombre;
        string fecha;
        string descripcion;
    
    public:
        evento();
        evento(string nombre, string fecha, string descripcion);
        string get_eventoInfo();
    
};

#endif