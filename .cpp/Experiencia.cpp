#include "experiencia.h"

using namespace std;

Experiencia::Experiencia(string codReserva, string descripcion, int precio, DTFecha fecha):
   codRes(codReserva),
   desc(descripcion),
   precioBase(precio),
   fecha(fecha){
    participantes = {}; 
}

DTExpe Experiencia::getDT(){
    //armamos una lista de nombres
    set<string> listaTuristas;
    set<Turista*>::iterator iter;
    //recorremos los turistas participantes y agregamos sus nombres a la lista
    for(iter = participantes.begin(); iter != participantes.end(); iter++){
        listaTuristas.insert((*iter)->getNombre());
    }
    //creamos el datavalue
    DTExpe expe = DTExpe(codRes, desc, fecha, listaTuristas);

    return expe;
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

int Experiencia::contarTuristas(){

    set<Turista*>::iterator iter;
    int contador = 0;

    for(iter = participantes.begin(); iter != participantes.end(); iter++){
        contador =+ 1;
    }

    return contador;
}

Experiencia::~Experiencia(){

    participantes.clear();

}

