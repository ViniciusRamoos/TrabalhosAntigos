/*Aluno:Vinícius Ramos Deramio
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
    cout<<"2)Velocidade Média\n";
    cout<<"3)Consumo Médio\n";
    cout<<"4)Circuito Simples\n";
    cout<<"5)Sair\n";
    cout<<"Opção:";
}
menuporcentagem()
{
    setlocale(LC_ALL,"");
    cout<<"1)Valor Parcial\n";
    cout<<"2)Valor Total\n";
    cout<<"3)Porcentagem Parcial\n";
    cout<<"4)Sair\n";
    cout<<"Opção:";
}
menuvelocidade()
{
    setlocale(LC_ALL,"");
    cout<<"1)Velocidade Média\n";
    cout<<"2)Distância\n";
    cout<<"3)Tempo\n";
    cout<<"4)Sair\n";
    cout<<"Opção:";
}
menuconsumo()
{
    setlocale(LC_ALL,"");
    cout<<"1)Consumo Médio\n";
    cout<<"2)Distância\n";
    cout<<"3)Litros Gastos\n";
    cout<<"4)Sair\n";
    cout<<"Opção:";
}
menucircuito()
{
    setlocale(LC_ALL,"");
    cout<<"1)Tensão\n";
    cout<<"2)Corrente\n";
    cout<<"3)Resistência\n";
    cout<<"4)Sair\n";
    cout<<"Opção:";
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
                cout<<"Opção Inválida";
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
                cout<<"Digite a Distância:";
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
                cout<<"Distância:"<<d;
                getch();
                system("CLS");
                break;
            case 3:
                cout<<"Digite a Velocidade:";
                cin>>v;
                cout<<"Digite a Distância:";
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
                cout<<"Opção Inválida";
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
                cout<<"Digite a Distância:";
                cin>>d2;
                cout<<"Digite a quantidade de Litros Gastos:";
                cin>>g;
                c = consumo(d2,g);
                cout<<"Consumo:"<<c;
                getch();
                system("CLS");
                break;
            case 2:
                cout<<"Digite o Consumo Médio:";
                cin>>c;
                cout<<"Digite quantidade de Litros Gastos:";
                cin>>g;
                d2 = distancia2(c,g);
                cout<<"Distância:"<<d2;
                getch();
                system("CLS");
                break;
            case 3:
                cout<<"Digite o Consumo Médio:";
                cin>>c;
                cout<<"Digite a Distância:";
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
                cout<<"Opção Inválida";
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
                cout<<"Digite a Resistência:";
                cin>>r;
                te = tensao(co,r);
                cout<<"Tensão:"<<te;
                getch();
                system("CLS");
                break;
            case 2:
                cout<<"Digite a Tensão:";
                cin>>te;
                cout<<"Digite a Resistência:";
                cin>>r;
                co = corrente(te,r);
                cout<<"Corrente:"<<co;
                getch();
                system("CLS");
                break;
            case 3:
                cout<<"Digite a Tensão:";
                cin>>te;
                cout<<"Digite a Corrente:";
                cin>>co;
                r = resistencia(te,co);
                cout<<"Resistência:"<<r;
                getch();
                system("CLS");
                break;
            case 4:
                cout<<"Voltando...";
                Sleep(2000);
                system("CLS");
                break;
            default:
                cout<<"Opção Inválida";
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
