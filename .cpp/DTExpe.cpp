#include "DTExpe.h"

DTExpe::DTExpe(string codigoReserva, string descripcion, DTFecha fecha, set<string> turistas): 
codigoReserva(codigoReserva), descripcion(descripcion), fecha(fecha), turistas(turistas) {}

string DTExpe::getCodigoReserva() {
    return this->codigoReserva;
}

string DTExpe::getDescripcion() {
    return this->descripcion;
}

DTFecha DTExpe::getFecha() {
    return this->fecha;
}

set<string> DTExpe::getTuristas() {
    return this->turistas;
}

ostream& operator<<(ostream& os, DTExpe& dt) {
    os << dt.getCodigoReserva() 
       << "->" << dt.getDescripcion() << "(" 
       << dt.getFecha().getDia() << "/" 
       << dt.getFecha().getMes() << "/" 
       << dt.getFecha().getAnio() << ")/";

    for (auto tourist = dt.getTuristas().begin(); tourist != dt.getTuristas().end(); tourist++) {
        os << *tourist;

        if (++tourist != dt.getTuristas().end()) {
            os << ",";
        }
    }

    return os;
}