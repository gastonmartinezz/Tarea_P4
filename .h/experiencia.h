#ifndef EXPERIENCIA_H
#define EXPERIENCIA_H

#include <string>

class Experiencia
{
public:
    // Solo ponemos las firmas de los métodos que Turista necesita usar para que no tire error de referencia a las clases dependientes.
    virtual float calcularCosto() = 0;
    virtual std::string getCodigoReserva() = 0;
};

#endif