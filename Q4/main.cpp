#include <iostream>
#include "FiguraGeometrica.h"
#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"


using namespace std;

int main()
{

    double x;
    double y;

    int figura;

    do{
        cout<<"Digite o numero da figura geometrica desejada\n";
        cout<<"1-Circulo 2-Quadrado 3-Triangulo \n";
        cin>>figura;


        if(figura==1){
            cout<<"Insira o raio do circulo em metros\n";
            cin>>x;

            Circulo fig("Circulo",x);
            cout<<"******************************************************************\n";
            cout<<"Nome da Figura: "<<fig.getNome()<<"\n"<<"Area: "<<fig.Area()<<"m2"<<"\n";
            cout<<"******************************************************************\n";
        }
        else if(figura==2){
            cout<<"Insira o valor da aresta do quadrado em metros\n";
            cin>>x;
            Quadrado fig("Quadrado",x);
            cout<<"******************************************************************\n";
            cout<<"Nome da Figura: "<<fig.getNome()<<"\n"<<"Area: "<<fig.Area()<<"m2"<<"\n";
            cout<<"******************************************************************\n";
        }
        else if(figura==3){

            cout<<"Insira o valor da base do triangulo em metros\n";
            cin>>x;
            cout<<"Insira o valor da altura do triangulo em metros\n";
            cin>>y;
            Triangulo fig("Triangulo",x,y);
            cout<<"******************************************************************\n";
            cout<<"Nome da Figura: "<<fig.getNome()<<"\n"<<"Area: "<<fig.Area()<<"m2"<<"\n";
            cout<<"******************************************************************\n";

        }
        cout<<endl;
    }while(figura==1||figura==2||figura==3);



    return 0;
}
