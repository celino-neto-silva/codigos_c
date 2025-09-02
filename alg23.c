#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>

int main(void)
{
    float hora_aula = get_float("Valor da hora(€): ");
    float qtd_aulas = get_int("Quantidade de aulas: ");
    float salario = qtd_aulas * hora_aula;

    printf("Salário nominal %2.f €\n",salario);
    salario = salario - ((salario/100)*34);
    printf("Salário real %2.f €\n",salario);
}
