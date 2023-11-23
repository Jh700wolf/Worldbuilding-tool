#ifndef LUGAR_H_
#define LUGAR_H_

#include <iostream>
#include <String>
#include <Vector>
#include <sstream>

using namespace std;

class lugar{
    private:
        string nombre;
        string descripcion;
    
    public:
        lugar();
        lugar(string nombre, string descripcion);
        string get_lugarInfo();
    
};

#endif