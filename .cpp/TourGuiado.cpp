#include "../include/tourGuiado.h"

TourGuiado :: TourGuiado(string a, std::vector<string> lv, string cr, string d, int pb, DTFecha f) : Experiencia(cr, d, pb, f) {
    this->agencia = a;
    this->lugaresVisitados = lv;
}

void TourGuiado :: setLugaresVisitados(std::vector<string> lv) {
    this->lugaresVisitados = lv;
}

string TourGuiado :: getAgencia() {
    return this->agencia;
}

std::vector<string> TourGuiado :: getLugaresVisitados() {
    return this->lugaresVisitados;
}

float TourGuiado :: calcularCosto() {
    float pb = (Experiencia::getPrecioBase());
    float lv = getLugaresVisitados().size();
    float t = (Experiencia::getDTExpe().getTuristas().size());
    return ((pb + 2) * lv * t);
}

TourGuiado :: ~TourGuiado(){
    
}