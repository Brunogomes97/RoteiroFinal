#include "ContaCorrente.h"
using namespace std;
ContaCorrente::ContaCorrente(int num,double sal,string nome,double salario,int limite):Conta(num,sal,nome)
{
    this->salario=salario;
    this->limite=limite;
}


double ContaCorrente::getSalario(){
    return salario;

}
int ContaCorrente::getlimite(){
    return limite;

}
void ContaCorrente::sacar(double valor){
    if(valor>(saldo+limite)){
        cout<<"Nao ha limite disponivel"<<endl;

    }else{
        saldo-=valor;
    }

}

double ContaCorrente::definirLimite(){
    limite=salario*2;
    return limite;
}
ContaCorrente::~ContaCorrente()
{
    //dtor
}
