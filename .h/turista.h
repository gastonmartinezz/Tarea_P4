#ifndef TURISTA_H
#define TURISTA_H

#include <string>
#include <set>

// no usamos using namespace std en el header para evitar conflictos de nombres en otros archivos que incluyan este header.
using std::set;
using std::string;

// Aviso que existe la clase Experiencia y DTFecha para que no tire error,
// ya que las usamos a continuación pero se definen en otros archivos.

class Experiencia;
class DTFecha;

class Turista
{
private:
    string ci;
    string nombre;
    string email;
    // Relación con Experiencia
    set<Experiencia *> experiencias;

public:
    Turista(string ci, string nombre, string email);

    // Getters
    string getCi() const;
    string getNombre() const;
    string getEmail() const;

    // Operaciones requeridas
    string toString() const;
    set<string> listarExperiencias(DTFecha *desde, float min, float max) const;

    // Gestión de la relación
    void agregarExperiencia(Experiencia *exp);

    ~Turista();
};

#endif