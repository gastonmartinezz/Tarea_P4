#include ".h\experiencia.h"

using namespace std;

Experiencia::Experiencia(string codReserva, string descripcion, int precio, DTFecha fecha){
   codRes = codReserva;
   desc = descripcion;
   precioBase = precio;
   fecha = fecha;
   participantes = {};
}

string Experiencia::getCodigoReserva(){
    return codRes;
}

string Experiencia::getDescripcion(){
    return desc;
}

int Experiencia::getPrecioBase(){
    return precioBase;
}

DTFecha Experiencia::getFecha(){
    return fecha;
}

set<Turista*> Experiencia::getTuristas(){
    return participantes;
}

void Experiencia::agregarTurista(Turista* turista){
    participantes.insert(turista);
}

void Experiencia::eliminarTurista(Turista* turista){
    participantes.erase(turista);
}

Experiencia::~Experiencia(){

    participantes.clear();

}