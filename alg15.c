#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
#include<time.h>

int dia_nasc = 0;
int mes_nasc = 0;
int ano_nasc = 0;

int ano_atual = 0;
int mes_atual = 0;
int dia_atual = 0;

int main(void)
{
    dia_nasc = get_int("Qual dia você nasceu?: ");
    mes_nasc = get_int("Qual mês você nasceu?: ");
    ano_nasc = get_int("Qual ano você nasceu?: ");
    system("clear");
    dia_atual = get_int("Qual é o dia atual?: ");
    mes_atual = get_int("Qual é o mês atual?: ");
    ano_atual = get_int("Qual é o ano atual?: ");
    system("clear");

    int anos = ano_atual - ano_nasc;

    int meses = 0;
    if(mes_atual < mes_nasc)
    {
        meses = (mes_atual - mes_nasc) + 12;
    }
    else if(mes_atual >= mes_nasc)
    {
        meses = mes_atual - mes_nasc;
    }

    int dias = 0;
    if(dia_atual < dia_nasc)
    {
        dias = dia_atual;
    }
    else if(dia_atual >= dia_nasc)
    {
        dias = dia_atual - dia_nasc;
    }

    if(dia_atual < dia_nasc || mes_atual < mes_nasc)
    {
        anos = anos - 1;
    }
    printf("Você tem %i anos, %i meses e %i dias\n",anos,meses,dias);
}
