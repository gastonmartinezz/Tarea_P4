#include <ostream>
using namespace std;

class DTFecha {
private: 
    int dia, mes, anio;
    
public:
    DTFecha();//necesario sino daba error al crear experiencia
    DTFecha(int, int, int);
    int getDia();
    int getMes();
    int getAnio();
};