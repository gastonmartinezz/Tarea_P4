#include <ostream>
using namespace std;

class DTFecha {
private: 
    int dia, mes, anio;
    DTFecha();
    
public:
    DTFecha(int, int, int);

    int getDia();
    int getMes();
    int getAnio();
};