#include "FiguraGeometrica.h"

using namespace std;

FiguraGeometrica::FiguraGeometrica(string nome,double base,double raio){
    this->nome=nome;
    this->base=base;
    this->raio=raio;
}
FiguraGeometrica::FiguraGeometrica(string nome,double base){
    this->nome=nome;
    this->base=base;
}


FiguraGeometrica::FiguraGeometrica(){}
FiguraGeometrica::~FiguraGeometrica(){}
void FiguraGeometrica::setNome(string nome){
    this->nome=nome;
}
void FiguraGeometrica::setAltura(double altura){
    this->altura=altura;
}
void FiguraGeometrica::setRaio(double raio){
    this->raio=raio;
}
void FiguraGeometrica::setBase(double base){
    this->base=base;
}
 string FiguraGeometrica::getNome(){
    return nome;

}
double FiguraGeometrica::getAltura(){
    return altura;

}
double FiguraGeometrica::getBase(){
    return base;

}
double FiguraGeometrica::getRaio(){
    return raio;

}

