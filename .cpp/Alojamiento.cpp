#ifndef ALOJAMIENTO_H
#define ALOJAMIENTO_H

using namespace std;

#include ".h/alojamiento.h"

Alojamiento::Alojamiento(string codReserva, string descripcion, int precioBase, DTFecha fecha, string hotel, TipoRegimen regimen, int cantNoches) : Experiencia(codReserva, descripcion, precioBase, fecha){
    hotel = hotel;
    regimen = regimen;
    cantNoches = cantNoches;
}

float Alojamiento::calcularCosto(){
    float total = 0;
    int pB = getPrecioBase();

    if(regimen == TipoRegimen::AllInclusive){
        total = (pB*cantNoches) + (cantNoches*10);
    }else{
        total = (pB*cantNoches);
    }

    return total;
}

Alojamiento::~Alojamiento(){
}

#endif