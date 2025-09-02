#include<stdio.h>
#include<cs50.h>

int main(void)
{
    float preco_dia = 90;

    int dias = get_int("Dias Alugados: ");
    float valor_dias = dias * preco_dia;

    float preco_km = 0.20;

    int kms = get_int("Kms rodados: ");
    float valor_kms = kms * preco_km;

    float valor_total = valor_kms + valor_dias;

    printf("Valor Total a pagar: %.2f €\n",valor_total);
}
