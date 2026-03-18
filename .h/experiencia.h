#ifndef EXPERIENCIA_H
#define EXPERIENCIA_H

#include <string>
using namespace std;

#include <set>
#include "DTExpe.h"
#include "turista.h"

class Experiencia {
    private:
        string codRes;
        string desc;
        int precioBase;
        DTFecha fecha;

        set<Turista*> participantes; //pseudo atributo para el link con turista
        Experiencia(); //constructor por defecto

    public:
        Experiencia(string codReserva, string descripcion, int precio, DTFecha fecha);
        virtual ~Experiencia();
        virtual float calcularCosto() = 0;
        DTExpe getDT();
        void agregarTurista(Turista* turista);
        void eliminarTurista(Turista* turista);

        //GETTERS
        string getCodigoReserva();
        string getDescripcion();
        int getPrecioBase();
        DTFecha getFecha();
        set<Turista*> getTuristas(); 
        int contarTuristas();
        

};

#endif