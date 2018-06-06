#include "Circulo.h"

using namespace std;

Circulo::Circulo(string s,double b):FiguraGeometrica(s,b){}

Circulo::Circulo(){}
Circulo::~Circulo(){}

double Circulo::Area(){
    return 3.14*(base*base);

}
