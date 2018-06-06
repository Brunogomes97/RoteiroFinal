#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

class Triangulo: public FiguraGeometrica
{
    public:
        Triangulo();
        Triangulo(std::string,double,double);
        virtual ~Triangulo();
        double Area();



};

#endif // TRIANGULO_H
