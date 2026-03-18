#ifndef EVENTOCULTURAL_H
#define EVENTOCULTURAL_H

#include <string>
#include "experiencia.h"

class EventoCultural : public Experiencia
{
private:
    string ubicacion;
    bool usoCupon;
    EventoCultural();

public:
    EventoCultural(string codReserva, string descripcion, int precioBase, DTFecha fecha, string ubicacion, bool usoCupon);
    ~EventoCultural();

    bool getUsoCupon();
    float calcularCosto();
};

#endif