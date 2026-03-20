#include "DTExpe.h"

DTExpe::DTExpe(string codigoReserva, string descripcion, DTFecha fecha, set<string> turistas) : 
codigoReserva(codigoReserva), descripcion(descripcion), fecha(fecha), turistas() {}

string DTExpe::getCodigoReserva() {
    return this->codigoReserva;
}

string DTExpe::getDescripcion() {
    return this->descripcion;
}

DTFecha DTExpe::getFecha() {
    return fecha;
}

ostream& operator<<(ostream& os, DTExpe& dt) {
    os << dt.getCodigoReserva() 
       << "->" << dt.getDescripcion() << "(" 
       << dt.getFecha().getDia() << "/" << dt.getFecha().getMes() << "/" << dt.getFecha().getAnio() << ")/"

    for int(i = 0; i <= dt.)

}