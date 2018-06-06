#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Conta.h"

class ContaCorrente : public Conta
{
    public:
        ContaCorrente(int,double,std::string,double,int);
        virtual ~ContaCorrente();
        double getSalario();
        int getlimite();
        void sacar(double);



        double virtual definirLimite();
    protected:
        double salario;
        int limite;


};

#endif // CONTACORRENTE_H
