#include <iostream>
#include <list>
#include <set>
#include <map>

#include "experiencia.h"
#include "alojamiento.h"
#include "eventoCultural.h"
#include "turista.h"
#include "DTExpe.h"
#include "DTFecha.h"
// #include "tourGuiado.h"

using namespace std;

list<Experiencia *> experiencias;
map<string, Experiencia *> map_experiencias;

list<Turista *> turistas;
map<string, Turista *> map_turistas;

void coleccion_guardarExpe(Experiencia *exp)
{
    experiencias.push_back(exp);
    pair<string, Experiencia *> entry(exp->getCodigoReserva(), exp);
    map_experiencias.insert(entry);
}

void coleccion_guardarTurista(Turista *tur)
{
    turistas.push_back(tur);
    pair<string, Turista *> entry(tur->getCi(), tur);
    map_turistas.insert(entry);
}

void parte_a()
{
    Alojamiento *aloj1 = new Alojamiento("ALX5489", "Hotel moderno", 30, DTFecha(18, 5, 2020), "Hotel Lindorf", TipoRegimen::AllInclusive, 5);

    Alojamiento *aloj2 = new Alojamiento("ALJ4789 ", "Todas las habitaciones con vista al mar ", 100, DTFecha(10, 2, 2025), "Hotel SeaView", TipoRegimen::MediaPension, 15);

    coleccion_guardarExpe(aloj1);
    coleccion_guardarExpe(aloj2);
}

void parte_b()
{
    /*
    TourGuiado* tour1 = new TourGuiado("TGO4657", "Plazas de Montevideo", 10, DTFecha(29,8,2024), "Paseos SA", {"Plaza Indpendencia", "Plaza Matriz"});

    TourGuiado* tour2 = new TourGuiado("TGR3257", "Puntos emblematicos", 5, DTFecha(29,8,2024), "Recorrer", {"Puerta de la Ciudadela", "Mausoleo", "Cabildo", "Palacio Salvo"});

    coleccion_guardarExpe(tour1);
    coleccion_guardarExpe(tour2);
    */
}

void parte_c()
{
    EventoCultural *evento = new EventoCultural("ECP1346", "Danza en el Solis", 10, DTFecha(29, 10, 2025), "Teatro Solis", true);

    coleccion_guardarExpe(evento);
}

void parte_d()
{
}

void parte_e()
{
    Turista *tur1 = new Turista("4.951.278-9", "Vanesa Castro", "vcastro.uy@servidor.net");

    Turista *tur2 = new Turista("1.535.442-0", "Karen Santos", "karen.s89@internet.uy");

    coleccion_guardarTurista(tur1);
    coleccion_guardarTurista(tur2);
}

void parte_f()
{
}

void parte_g()
{
}

void parte_h()
{
}

void parte_i()
{
}

void parte_j()
{
}

void parte_k()
{
}

void cleanUp()
{
}

int main()
{
    // Cargamos los datos de las partes a, b y c
    std::cout << " Iniciando Carga de Datos. " << std::endl;

    parte_a();
    std::cout << " Alojamientos cargados correctamente. " << std::endl;

    parte_b();
    std::cout << " Tours Guiados cargados correctamente. " << std::endl;

    parte_c();
    std::cout << " Eventos Culturales cargados correctamente. " << std::endl;

    // Parte d : Imprimir en consola utilizando la inserción de flujo el resultado de ejecutar la
    // operación getDT() para cada uno de los objetos Experiencia creados.

    std::cout << "\n  Ejecutando operacion getDT() para todas las experiencias. " << std::endl;
    parte_d();

    // Partes e,f y g
    // Registrar las siguientes relaciones entre turistas y experiencias (creando links de la
    // relación en ambas direcciones).

    std::cout << "\n Registrando Turistas y Relaciones. " << std::endl;
    parte_e();
    parte_f();
    parte_g();
    std::cout << " Relaciones entre turistas y experiencias establecidas." << std::endl;

    // Listar datos y eliminaciones

    std::cout << "\n Consultas de Vanesa Castro " << std::endl;
    parte_h();

    std::cout << "\n Eliminando Experiencia " << std::endl;
    // La letra pide eliminar TGR3257

    parte_i();
    std::cout << "[!] TGR3257 (Puntos emblematicos) se ha eliminado correctamente." << std::endl;
    std::cout << "\n Invocar la operación listarExperiencias(10/10/2020, 0, 1000)  " << std::endl;
    parte_j();

    // Parte k
    // Imprimir en consola utilizando la inserción de flujo el resultado de ejecutar la
    // operación getDT() para cada uno de los objetos Experiencias creados (mismo
    // código que la parte d).

    std::cout << "\n Estado final del sistema. " << std::endl;
    parte_k();

    // Limpieza del programa.

    std::cout << "\n Liberando memoria y finalizando programa. " << std::endl;
    cleanUp();

    return 0;
}