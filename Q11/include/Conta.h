#ifndef CONTA_H
#define CONTA_H
#include <string>
#include <iostream>


class Conta
{
    public:
        Conta(double,int,std::string);
        virtual ~Conta();
        virtual void sacar(double);
        void depositar(double);

        void setnum(int);
        void setsaldo(double);
        double getsaldo();
        std::string getnome();
        int getnum();
    protected:
        std::string nomeCliente;
        int numero;
        double saldo;

};

#endif // CONTA_H
