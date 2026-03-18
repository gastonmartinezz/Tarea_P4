#ifndef DTEXPE_H
#define DTEXPE_H

#include <string>
#include "DTFecha.h"
#include <set>
#include <ostream>
using namespace std;

class DTExpe
{
private:
    string codigoReserva, descripcion;
    DTFecha fecha;
    set<string> turistas;

public:
    DTExpe(string, string, DTFecha, set<string>);
    string getCodigoReserva();
    string getDescripcion();
    DTFecha getFecha();
};

#endif