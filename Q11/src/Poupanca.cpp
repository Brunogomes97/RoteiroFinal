#include "Poupanca.h"
using namespace std;
Poupanca::Poupanca(int num,double sal,string nome,int variacao,double taxaRendimento):Conta(num,sal,nome)
{
    this->variacao=variacao;
    this->taxaRendimento=taxaRendimento;
}
 double Poupanca::render(){
    if(variacao == 51){
        return taxaRendimento*saldo;
    }else if(variacao == 1){
        return (taxaRendimento+0.0005)*saldo;
    }
    else{
        return 0;

    }
 }
Poupanca::~Poupanca()
{
    //dtor
}
