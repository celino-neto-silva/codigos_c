#include<stdio.h>
#include<cs50.h>

int main(void)
{
    float valor_casa = get_float("Valor da casa: ");
    int anos_para_pagar = get_int("Quantidade de anos para pagar: ");
    float salario = get_float("Salário: ");

    float limite = ((salario / 100) * 30);
    float parcela = valor_casa / (anos_para_pagar * 12);

    if(parcela > limite)
    {
        printf("Negado!\n");
    }
    else
    {
        printf("Aprovado!\n");
        printf("%i parcelas de %.2f\n",(anos_para_pagar*12),parcela);
    }
}
