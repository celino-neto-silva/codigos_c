#include<stdio.h>
#include<cs50.h>

int main(void)
{
    float valor_hora = 25;
    int expediente = 8;

    int dias = get_int("Dias Trabalhados: ");

    float salario = (valor_hora * expediente) * dias;
    printf("Salário %.2f €\n", salario);
}
