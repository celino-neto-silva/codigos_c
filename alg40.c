#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int qtd_cigarros_dia = get_int("Quantos cigarros por dia?: ");
    int minutos_vida_dia = qtd_cigarros_dia * 10;

    int qtd_anos = get_int("Quantos anos fumando?: ");
    int total_dias = qtd_anos * 365;

    int minutos_vida_total = total_dias * minutos_vida_dia;

    int total_dias_perdidos = (minutos_vida_total / 60) / 24;
    printf("Considerando que a cada 1 cigarro são 10 minutos a menos de vida... Você já perdeu %i dias! \n", total_dias_perdidos);
}
