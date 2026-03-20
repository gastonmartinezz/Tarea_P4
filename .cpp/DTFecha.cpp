#include "DTFecha.h"

//constructor por defecto
DTFecha::DTFecha(){
    dia = 0;
    mes = 0;
    anio = 0;
}
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