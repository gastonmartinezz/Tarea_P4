#ifndef ALOJAMIENTO_H
#define ALOJAMIENTO_H

using namespace std;

#include <string>
#include "experiencia.h"
#include "tipoRegimen.h"

class Alojamiento: public Experiencia {
    private:
        string hotel;
        TipoRegimen regimen;
        int cantNoches;
        Alojamiento();

    public:
        Alojamiento(string codReserva, string descripcion, int precioBase, DTFecha fecha, string hotel, TipoRegimen regimen, int cantNoches);
        ~Alojamiento();
        float calcularCosto();
};

#endif