#ifndef DTEXPE_H
#define DTEXPE_H

#include <string>
#include <set>
#include <iostream>
using namespace std;

#include "DTFecha.h"

class DTExpe {
private:
    string codigoReserva, descripcion;
    DTFecha fecha;
    set<string> turistas;

public:
    DTExpe(string, string, DTFecha, set<string>);
    string getCodigoReserva();
    string getDescripcion();
    DTFecha getFecha();
    set<string> getTuristas();
};

ostream& operator<<(ostream& os, DTExpe& dt);

#endif