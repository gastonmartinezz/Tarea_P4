#include "tourGuiado.h"

// Implementamos contstructor
TourGuiado::TourGuiado(string a, set<string> lv, string cr, string d, int pb, DTFecha f) : Experiencia(cr, d, pb, f) {
    this->agencia = a;
    this->lugaresVisitados = lv;
}

// Implementamos getter para agencia
string TourGuiado::getAgencia() {
    return this->agencia;
}

// Implementamos getter para lugaresVisitados
set<string> TourGuiado::getLugaresVisitados() {
    return this->lugaresVisitados;
}

// Implementamos operacion
// La operación calcula el precio base más 2 unidades,
// multiplicado por la cantidad de lugares a visitar, 
// multiplicado por la cantidad de turistas participantes
float TourGuiado::calcularCosto() {
    float pb = getPrecioBase();
    float lv = getLugaresVisitados().size();
    float ct = getTuristas().size();
    float resultado = ((pb+2)*lv*ct);
    return resultado;
}

// No implementamos destructor jeje
TourGuiado::~TourGuiado() {
}