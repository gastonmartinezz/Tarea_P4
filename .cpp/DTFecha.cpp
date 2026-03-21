#include "DTFecha.h"


//constructor común
DTFecha::DTFecha(int dia, int mes, int anio) {
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

int DTFecha::getDia() {
    return this->dia;
}

int DTFecha::getMes() {
    return this->mes;
}

int DTFecha::getAnio() {
    return this->anio;
}

bool operator>=(DTFecha f1, DTFecha f2) {

    if (f1.getAnio() > f2.getAnio()) return true;
    if (f1.getAnio() < f2.getAnio()) return false;

    if (f1.getMes() > f2.getMes()) return true;
    if (f1.getMes() < f2.getMes()) return false;

    return f1.getDia() >= f2.getDia();
}