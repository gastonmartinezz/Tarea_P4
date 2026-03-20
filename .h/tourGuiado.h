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
    TourGuiado(string, set<string>, string, string, int, DTFecha); //Gaston: Corregi el <vector> por un <set> porque daba error de compilacion

    void setAgencia(string);
    void setLugaresVisitados(set<string>); //Gaston: agregué el set en el parametro para que compile

    string getAgencia();
    set<string> getLugaresVisitados();

    virtual float calcularCosto();
    ~TourGuiado();
};

#endif