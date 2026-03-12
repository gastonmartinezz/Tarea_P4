#include ".h/DTExpe.h";
#include ".h/DTExpe.h"

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