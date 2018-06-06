#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo:public FiguraGeometrica
{
    public:

        Circulo(std::string,double);
        Circulo();
        virtual ~Circulo();
        double Area();
};

#endif // CIRCULO_H
