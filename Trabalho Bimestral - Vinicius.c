/*Aluno:Vinícius Ramos Deramio
BV:1720392*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <locale.h>
#include <windows.h>


menu()
{
    setlocale(LC_ALL,"");
    printf("1)Porcentagem\n");
    printf("2)Velocidade Média\n");
    printf("3)Consumo Médio\n");
    printf("4)Circuito Simples\n");
    printf("5)Sair\n");
    printf("Opção:");
}
menuporcentagem()
{
    setlocale(LC_ALL,"");
    printf("1)Valor Parcial\n");
    printf("2)Valor Total\n");
    printf("3)Porcentagem Parcial\n");
    printf("4)Sair\n");
    printf("Opção:");
}
menuvelocidade()
{
    setlocale(LC_ALL,"");
    printf("1)Velocidade Média\n");
    printf("2)Distância\n");
    printf("3)Tempo\n");
    printf("4)Sair\n");
    printf("Opção:");
}
menuconsumo()
{
    setlocale(LC_ALL,"");
    printf("1)Consumo Médio\n");
    printf("2)Distância\n");
    printf("3)Litros Gastos\n");
    printf("4)Sair\n");
    printf("Opção:");
}
menucircuito()
{
    setlocale(LC_ALL,"");
    printf("1)Tensão\n");
    printf("2)Corrente\n");
    printf("3)Resistência\n");
    printf("4)Sair\n");
    printf("Opção:");
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
        scanf("%d",&op);
        system("CLS");
        switch (op)
        {
        case 1:
            while (op2!=4)
            {
            menuporcentagem();
            scanf("%d",&op2);
            system("CLS");
            switch(op2)
            {
            case 1:
                printf("Digite o Valor Total:");
                scanf("%f",&vt);
                printf("Digite a Porcentagem Parcial:");
                scanf("%f",&pp);
                vp = valorparcial(vt,pp);
                printf("Valor Parcial: %f", vp);
                getch();
                system("CLS");
                break;
            case 2:
                printf("Digite o Valor Parcial:");
                scanf("%f",&vp);
                printf("Digite a Porcentagem Parcial:");
                scanf("%f",&pp);
                vt = valortotal(vp,pp);
                printf("Valor Total: %f", vt);
                getch();
                system("CLS");
                break;
            case 3:
                printf("Digite o Valor Total:");
                scanf("%f",&vt);
                printf("Digite o Valor Parcial:");
                scanf("%f",&vp);
                pp = porcentagemparcial(vt,vp);
                printf("Valor Parcial: %f", pp);
                getch();
                system("CLS");
                break;
            case 4:
                printf("Voltando...");
                Sleep(2000);
                system("CLS");
                break;
            default:
                printf("Opção Inválida");
                Sleep(2000);
                system("CLS");
                break;
                }
            }
        case 2:
            while (op2!=4)
            {
            menuvelocidade();
            scanf("%d",&op2);
            system("CLS");
            switch(op2)
            {
            case 1:
                printf("Digite a Distância:");
                scanf("%f",&d);
                printf("Digite o Tempo:");
                scanf("%f",&tem);
                v = velocidade(d,tem);
                printf("Velocidade: %f", v);
                getch();
                system("CLS");
                break;
            case 2:
                printf("Digite a Velocidade:");
                scanf("%f",&v);
                printf("Digite o Tempo:");
                scanf("%f",&tem);
                d = distancia(v,tem);
                printf("Distância: %f", d);
                getch();
                system("CLS");
                break;
            case 3:
                printf("Digite a Velocidade:");
                scanf("%f",&v);
                printf("Digite a Distância:");
                scanf("%f",&d);
                tem = tempo(d,v);
                printf("Tempo: %f", tem);
                getch();
                system("CLS");
                break;
             case 4:
                printf("Voltando...");
                Sleep(2000);
                system("CLS");
                break;
            default:
                printf("Opção Inválida");
                Sleep(2000);
                system("CLS");
                break;
                }
            }
        case 3:
            while (op2!=4)
            {
            menuconsumo();
            scanf("%d",&op2);
            system("CLS");
            switch(op2)
            {
            case 1:
                printf("Digite a Distância:");
                scanf("%f",&d2);
                printf("Digite a quantidade de Litros Gastos:");
                scanf("%f",&g);
                c = consumo(d2,g);
                printf("Consumo: %f", c);
                getch();
                system("CLS");
                break;
            case 2:
                printf("Digite o Consumo Médio:");
                scanf("%f",&c);
                printf("Digite quantidade de Litros Gastos:");
                scanf("%f",&g);
                d2 = distancia2(c,g);
                printf("Distância: %f", d2);
                getch();
                system("CLS");
                break;
            case 3:
                printf("Digite o Consumo Médio:");
                scanf("%f",&c);
                printf("Digite a Distância:");
                scanf("%f",&d2);
                g = gasto(c,d2);
                printf("Litros Gastos: %f", g);
                getch();
                system("CLS");
                break;
             case 4:
                printf("Voltando...");
                Sleep(2000);
                system("CLS");
                break;
            default:
                printf("Opção Inválida");
                Sleep(2000);
                system("CLS");
                break;
                }
            }
        case 4:
            while (op2!=4)
            {
            menucircuito();
            scanf("%d",&op2);
            system("CLS");
            switch(op2)
            {
            case 1:
                printf("Digite a Corrente:");
                scanf("%f",&co);
                printf("Digite a Resistência:");
                scanf("%f",&r);
                te = tensao(co,r);
                printf("Tensão: %f", te);
                getch();
                system("CLS");
                break;
            case 2:
                printf("Digite a Tensão:");
                scanf("%f",&te);
                printf("Digite a Resistência:");
                scanf("%f",&r);
                co = corrente(te,r);
                printf("Corrente: %f", co);
                getch();
                system("CLS");
                break;
            case 3:
                printf("Digite a Tensão:");
                scanf("%f",&te);
                printf("Digite a Corrente:");
                scanf("%f",&co);
                r = resistencia(te,co);
                printf("Resistência: %f", r);
                getch();
                system("CLS");
                break;
            case 4:
                printf("Voltando...");
                Sleep(2000);
                system("CLS");
                break;
            default:
                printf("Opção Inválida");
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
