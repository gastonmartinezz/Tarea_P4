using namespace std;

#include "eventoCultural.h"

EventoCultural::EventoCultural(string codReserva, string descripcion, int precioBase, DTFecha fecha, string ubicacion, bool usoCupon) : Experiencia(codReserva, descripcion, precioBase, fecha){
    this->ubicacion = ubicacion;
    this->usoCupon = usoCupon;
}

EventoCultural::~EventoCultural(){
}

bool EventoCultural::getUsoCupon(){
    return usoCupon;
}

float EventoCultural::calcularCosto(){
    float total = 0;
    int pB = getPrecioBase();
    int cantTuristas = static_cast<int>(getTuristas().size());

    if (getUsoCupon()) total = (pB * cantTuristas) - (5 * cantTuristas);
    else total = (pB * cantTuristas);

    return total;
}