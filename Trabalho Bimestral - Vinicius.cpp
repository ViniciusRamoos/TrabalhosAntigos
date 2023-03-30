/*Aluno:Vin�cius Ramos Deramio
BV:1720392*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <locale.h>
#include <windows.h>

using namespace std;

menu()
{
    setlocale(LC_ALL,"");
    cout<<"1)Porcentagem\n";
    cout<<"2)Velocidade M�dia\n";
    cout<<"3)Consumo M�dio\n";
    cout<<"4)Circuito Simples\n";
    cout<<"5)Sair\n";
    cout<<"Op��o:";
}
menuporcentagem()
{
    setlocale(LC_ALL,"");
    cout<<"1)Valor Parcial\n";
    cout<<"2)Valor Total\n";
    cout<<"3)Porcentagem Parcial\n";
    cout<<"4)Sair\n";
    cout<<"Op��o:";
}
menuvelocidade()
{
    setlocale(LC_ALL,"");
    cout<<"1)Velocidade M�dia\n";
    cout<<"2)Dist�ncia\n";
    cout<<"3)Tempo\n";
    cout<<"4)Sair\n";
    cout<<"Op��o:";
}
menuconsumo()
{
    setlocale(LC_ALL,"");
    cout<<"1)Consumo M�dio\n";
    cout<<"2)Dist�ncia\n";
    cout<<"3)Litros Gastos\n";
    cout<<"4)Sair\n";
    cout<<"Op��o:";
}
menucircuito()
{
    setlocale(LC_ALL,"");
    cout<<"1)Tens�o\n";
    cout<<"2)Corrente\n";
    cout<<"3)Resist�ncia\n";
    cout<<"4)Sair\n";
    cout<<"Op��o:";
}
float valorparcial (float vt,float pp)
{
    float vp;
    vp = (vt*pp)/100;
    return vp;
}

float valortotal (float vp,float pp)
{
    float vt;
    vt = (100*vp)/pp;
    return vt;
}

float porcentagemparcial (float vt,float vp)
{
    float pp;
    pp = (100*vp)/vt;
    return pp;
}

float velocidade (float d,float tem)
{
    float v;
    v = d/tem;
    return v;
}

float distancia (float v,float tem)
{
    float d;
    d = v*tem;
    return d;
}

float tempo (float d,float v)
{
    float tem;
    tem = d/v;
    return v;
}

float consumo (float d2,float g)
{
    float c;
    c = d2/g;
    return c;
}

float distancia2 (float c,float g)
{
    float d2;
    d2 = c*g ;
    return d2;
}

float gasto (float c,float d2)
{
    float g;
    g = d2/c ;
    return g;
}

float tensao (float co,float r)
{
    float te;
    te = co*r ;
    return te;
}

float corrente (float te,float r)
{
    float co;
    co = te/r ;
    return co;
}

float resistencia (float te,float co)
{
    float r;
    r = te/co ;
    return r;
}

int main ()
{
    setlocale(LC_ALL,"");
    int op=1,op2=1;
    float vt,pp,vp,v,tem,d,c,d2,g,te,co,r;

    while (op!=5)
    {
        op2=0;
        menu();
        cin>>op;
        system("CLS");
        switch (op)
        {
        case 1:
            while (op2!=4)
            {
            menuporcentagem();
            cin>>op2;
            system("CLS");
            switch(op2)
            {
            case 1:
                cout<<"Digite o Valor Total:";
                cin>>vt;
                cout<<"Digite a Porcentagem Parcial:";
                cin>>pp;
                vp = valorparcial(vt,pp);
                cout<<"Valor Parcial:"<<vp;
                getch();
                system("CLS");
                break;
            case 2:
                cout<<"Digite o Valor Parcial:";
                cin>>vp;
                cout<<"Digite a Porcentagem Parcial:";
                cin>>pp;
                vt = valortotal(vp,pp);
                cout<<"Valor Total:"<<vt;
                getch();
                system("CLS");
                break;
            case 3:
                cout<<"Digite o Valor Total:";
                cin>>vt;
                cout<<"Digite o Valor Parcial:";
                cin>>vp;
                pp = porcentagemparcial(vt,vp);
                cout<<"Valor Parcial:"<<pp;
                getch();
                system("CLS");
                break;
            case 4:
                cout<<"Voltando...";
                Sleep(2000);
                system("CLS");
                break;
            default:
                cout<<"Op��o Inv�lida";
                Sleep(2000);
                system("CLS");
                break;
                }
            }
        case 2:
            while (op2!=4)
            {
            menuvelocidade();
            cin>>op2;
            system("CLS");
            switch(op2)
            {
            case 1:
                cout<<"Digite a Dist�ncia:";
                cin>>d;
                cout<<"Digite o Tempo:";
                cin>>tem;
                v = velocidade(d,tem);
                cout<<"Velocidade:"<<v;
                getch();
                system("CLS");
                break;
            case 2:
                cout<<"Digite a Velocidade:";
                cin>>v;
                cout<<"Digite o Tempo:";
                cin>>tem;
                d = distancia(v,tem);
                cout<<"Dist�ncia:"<<d;
                getch();
                system("CLS");
                break;
            case 3:
                cout<<"Digite a Velocidade:";
                cin>>v;
                cout<<"Digite a Dist�ncia:";
                cin>>d;
                tem = tempo(d,v);
                cout<<"Tempo:"<<tem;
                getch();
                system("CLS");
                break;
             case 4:
                cout<<"Voltando...";
                Sleep(2000);
                system("CLS");
                break;
            default:
                cout<<"Op��o Inv�lida";
                Sleep(2000);
                system("CLS");
                break;
                }
            }
        case 3:
            while (op2!=4)
            {
            menuconsumo();
            cin>>op2;
            system("CLS");
            switch(op2)
            {
            case 1:
                cout<<"Digite a Dist�ncia:";
                cin>>d2;
                cout<<"Digite a quantidade de Litros Gastos:";
                cin>>g;
                c = consumo(d2,g);
                cout<<"Consumo:"<<c;
                getch();
                system("CLS");
                break;
            case 2:
                cout<<"Digite o Consumo M�dio:";
                cin>>c;
                cout<<"Digite quantidade de Litros Gastos:";
                cin>>g;
                d2 = distancia2(c,g);
                cout<<"Dist�ncia:"<<d2;
                getch();
                system("CLS");
                break;
            case 3:
                cout<<"Digite o Consumo M�dio:";
                cin>>c;
                cout<<"Digite a Dist�ncia:";
                cin>>d2;
                g = gasto(c,d2);
                cout<<"Litros Gastos:"<<g;
                getch();
                system("CLS");
                break;
             case 4:
                cout<<"Voltando...";
                Sleep(2000);
                system("CLS");
                break;
            default:
                cout<<"Op��o Inv�lida";
                Sleep(2000);
                system("CLS");
                break;
                }
            }
        case 4:
            while (op2!=4)
            {
            menucircuito();
            cin>>op2;
            system("CLS");
            switch(op2)
            {
            case 1:
                cout<<"Digite a Corrente:";
                cin>>co;
                cout<<"Digite a Resist�ncia:";
                cin>>r;
                te = tensao(co,r);
                cout<<"Tens�o:"<<te;
                getch();
                system("CLS");
                break;
            case 2:
                cout<<"Digite a Tens�o:";
                cin>>te;
                cout<<"Digite a Resist�ncia:";
                cin>>r;
                co = corrente(te,r);
                cout<<"Corrente:"<<co;
                getch();
                system("CLS");
                break;
            case 3:
                cout<<"Digite a Tens�o:";
                cin>>te;
                cout<<"Digite a Corrente:";
                cin>>co;
                r = resistencia(te,co);
                cout<<"Resist�ncia:"<<r;
                getch();
                system("CLS");
                break;
            case 4:
                cout<<"Voltando...";
                Sleep(2000);
                system("CLS");
                break;
            default:
                cout<<"Op��o Inv�lida";
                Sleep(2000);
                system("CLS");
                break;
                }
            }
        }
    }
    getch();
    return(0);
}
