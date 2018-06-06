#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"

class Quadrado:public FiguraGeometrica
{
    public:
        Quadrado(std::string,double);
        //Quadrado(std::string,double,double);
        Quadrado();
        double Area();
        virtual ~Quadrado();

};

#endif // QUADRADO_H
