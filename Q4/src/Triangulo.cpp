#include "Triangulo.h"


using namespace std;

Triangulo::Triangulo(){
    base=0;
    raio=0;

}
Triangulo::Triangulo(string s,double b,double r):FiguraGeometrica(s,b,r){}
Triangulo::~Triangulo(){}

double Triangulo::Area(){
    return (base*raio)/2;

}
