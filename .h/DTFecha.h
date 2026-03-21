#ifndef DTFECHA_H
#define DTFECHA_H
#include <ostream>
using namespace std;

class DTFecha
{
private:
    int dia, mes, anio;

public:
    DTFecha(int, int, int);
    int getDia();
    int getMes();
    int getAnio();

};

bool operator>=(DTFecha f1, DTFecha f2);


#endif
