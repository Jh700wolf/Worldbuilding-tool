#ifndef LUGAR_H_
#define LUGAR_H_

#include <iostream>
#include <String>
#include <Vector>
#include <sstream>

using namespace std;

class Lugar{
    private:
        string nombre;
        string descripcion;
    
    public:
        Lugar();
        Lugar(string nombre, string descripcion);
        string getLugarInfo();
        string getNombre() const;
        string getDescripcion();
        void setNombre (string);
        void setDescripcion(string);
    
};

#endif
