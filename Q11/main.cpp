#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;


int main()
{


    ContaCorrente *c = new ContaCorrente(4545,5000,"Bruno",9000,2000);
    cout<<c->getSalario()<<endl;
    c->sacar(9000);
    cout<<c->getsaldo()<<endl;
    c->sacar(1000);
    cout<<c->getsaldo()<<endl;
    cout<<c->getnome()<<endl;


    return 0;
}
