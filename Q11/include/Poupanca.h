#ifndef POUPANCA_H
#define POUPANCA_H
#include "Conta.h"

class Poupanca : public Conta
{
    public:
        Poupanca(int,double,std::string,int,double);
        virtual ~Poupanca();
        double render();

    private:
        int variacao;
        double taxaRendimento;
};

#endif // POUPANCA_H
