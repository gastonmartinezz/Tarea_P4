// Modulo de definicion de la clase TourGuiado
// Esta clase es subclase de la clase Experiencia

#ifndef TOURGUIADO_H
#define TOURGUIADO_H

#include <string>
#include <set>
#include "../datatypes/DTFecha.h"
#include "experiencia.h"

// Un objeto de la clase TourGuiado tiene asociado:
//      codigoReserva - string
//      descripcion - string
//      precioBase - int
//      fecha - DTFecha
//      agencia - string
//      lugaresVisitados - string

class TourGuiado : public Experiencia {
    private:
        string agencia;
        set<string> lugaresVisitados;
    public:
        TourGuiado(string, std::vector<string>, string, string, int, DTFecha);
        void setLugaresVisitados(string);
        string getAgencia();
        set<string> getLugaresVisitados();
        virtual float calcularCosto();
        ~TourGuiado();
};

// Creamos objeto con parametros
TourGuiado :: TourGuiado(string a, std::vector<string> lv, string cr, string d, int pb, DTFecha f) : Experiencia(cr, d, pb, f);

// Implementamos setter del atributo agencia
void TourGuiado :: setAgencia(string a);

// Implementamos setter del atrubuto lugaresVisitados
void TourGuiado :: setLugaresVisitados(string lv);

// Implementamos getter del atributo agencia
string TourGuiado :: getAgencia();

// Implementamos getter del atributo lugaresVisitados
std::vector<string> TourGuiado :: getLugaresVisitados();

// Implementamos metodo de la operacion calcularCosto
// Devuelve el precio base mas 2 unidades, multiplicado por la cantidad de 
// lugares a visitar, multiplicado por la cantidad de turistas participantes
float tourGuiado :: calcularCosto();

// Destruimos objeto TourGuiado
TourGuiado :: ~TourGuiado();