#include "Quadrado.h"
#include "FiguraGeometrica.h"

using namespace std;
Quadrado::Quadrado(string s,double b):FiguraGeometrica(s,b){}

Quadrado::Quadrado(){}
Quadrado::~Quadrado(){}

double Quadrado::Area(){
    return base*base;

}
