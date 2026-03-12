#include "Experiencia.h"
#include "Turista.h"
#include "DTFecha.h"
#include <iostream>

// usamos el espacio de nombres std para evitar escribir std:: antes de cada uso de string, set, etc.
using namespace std;

Turista::Turista(string ci, string nombre, string email)
{
    this->ci = ci;
    this->nombre = nombre;
    this->email = email;
}

string Turista::getCi() const
{
    return this->ci;
}

string Turista::getNombre() const
{
    return this->nombre;
}

string Turista::getEmail() const
{
    return this->email;
}

// Retornamos un string con el formato requerido.
string Turista::toString() const
{
    return ci + "->" + nombre + "/" + email;
}

set<string> Turista::listarExperiencias(DTFecha *desde, float min, float max) const
{
    set<string> resultado;
    set<Experiencia *>::iterator it;

    for (it = experiencias.begin(); it != experiencias.end(); ++it)
    {
        float costo = (*it)->calcularCosto();

        // Aquí comparamos el costo y la fecha
        if (costo >= min && costo <= max)
        {
            // usamos un iterador it para acceder a cada experiencia y obtener su código de reserva.
            resultado.insert((*it)->getCodigoReserva());
        }
    }
    return resultado;
}

// Método para agregar una experiencia a la colección del turista, con insert la experiencia se agrega al final del set.
void Turista::agregarExperiencia(Experiencia *exp)
{
    this->experiencias.insert(exp);
}

Turista::~Turista()
{
    // El destructor no debe eliminar las experiencias,
    // ya que Turista solo tiene punteros a ellas.
}