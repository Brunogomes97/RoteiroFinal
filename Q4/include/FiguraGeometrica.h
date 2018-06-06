#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        FiguraGeometrica(std::string,double);
        FiguraGeometrica(std::string,double,double);
        virtual ~FiguraGeometrica();
        void setNome(std::string);
        void setBase(double);
        void setAltura(double);
        void setRaio(double);
        std::string getNome();
        double getAltura();
        double getBase();
        double getRaio();


    protected:
        double base;
        double altura;
        double raio;
        std::string nome;

};

#endif // FIGURAGEOMETRICA_H
