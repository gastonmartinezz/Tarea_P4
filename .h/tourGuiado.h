#ifndef TOURGUIADO_H
#define TOURGUIADO_H

#include <string>
#include <set>
#include <vector>
#include "DTFecha.h"
#include "experiencia.h"

using namespace std;

class TourGuiado : public Experiencia
{
private:
    string agencia;
    set<string> lugaresVisitados;

public:
    TourGuiado(string, vector<string>, string, string, int, DTFecha);

    void setAgencia(string);
    void setLugaresVisitados(string);

    string getAgencia();
    set<string> getLugaresVisitados();

    virtual float calcularCosto();
    ~TourGuiado();
};

#endif