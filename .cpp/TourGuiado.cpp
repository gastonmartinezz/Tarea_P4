#include "tourGuiado.h"

TourGuiado ::TourGuiado(string a, set<string> lv, string cr, string d, int pb, DTFecha f) : Experiencia(cr, d, pb, f) //Gaston: Corregi el <vector> por un <set> porque daba error de compilacion
{
    this->agencia = a;
    this->lugaresVisitados = lv;
}

void TourGuiado ::setLugaresVisitados(set<string> lv) //Gaston: Corregi el <vector> por un <set> porque daba error de compilacion
{
    this->lugaresVisitados = lv;
}

string TourGuiado ::getAgencia()
{
    return this->agencia;
}

set<string> TourGuiado ::getLugaresVisitados() //Gaston: Corregi el <vector> por un <set> porque daba error de compilacion
{
    return this->lugaresVisitados;
}

float TourGuiado ::calcularCosto()
{
    float pb = (Experiencia::getPrecioBase());
    float lv = getLugaresVisitados().size();
    float t = (Experiencia::getDT().getTuristas().size());
    return ((pb + 2) * lv * t);
}

TourGuiado ::~TourGuiado()
{
}