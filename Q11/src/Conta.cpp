#include "Conta.h"

using namespace std;
Conta::Conta(double numero,int saldo,string nomeCliente)
{
   this->saldo=saldo;
   this->numero=numero;
}

double Conta::getsaldo(){
        return saldo;
}
 void Conta::sacar(double valor){
     if(valor>saldo)
        cout<<"Saldo Indisponivel"<<endl;
     else
        saldo -= valor;

 }
void Conta::depositar(double valor){
    saldo += valor;
}

int Conta::getnum(){
    return numero;
}
string Conta::getnome(){
    return nomeCliente;

}
Conta::~Conta()
{
    //dtor
}
