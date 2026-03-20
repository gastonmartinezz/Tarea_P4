#ifndef TOURGUIADO_H
#define TOURGUIADO_H

#include "DTFecha.h"
#include "experiencia.h"

#include <string>
#include <set>
#include <ostream>
using namespace std;

class TourGuiado : public Experiencia {
private:
    string agencia;
    set<string> lugaresVisitados;
    TourGuiado();

public:
    TourGuiado(string, set<string>, string, string, int, DTFecha);
    string getAgencia();
    set<string> getLugaresVisitados();
    virtual float calcularCosto();
    ~TourGuiado();
};

#endif
