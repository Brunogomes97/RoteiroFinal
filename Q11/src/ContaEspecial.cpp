#include "ContaEspecial.h"
using namespace std;
ContaEspecial::ContaEspecial(int num,double sald,string nome,double salar,int lim):ContaCorrente(num,sald,nome,sald,lim){}


double ContaEspecial::definirLimite(){
    limite=salario*4;
    return limite;
}

void depositar(double);
ContaEspecial::~ContaEspecial()
{
    //dtor
}
