#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>

float preco = 0;
float novo_preco = 0;
float parcelas = 0;
int opcao = 0;
int qtd_parcelas = 0;

int main(void)
{
    system("clear");
    preco = get_float("Preço do Produto (€): ");

    printf("-----------------------------------------------------------\n");
    printf("[1] Á vista ou no PIX: 15 por cento de desconto\n");
    printf("[2] Á vista no cartão de crédito: 10 por cento de desconto\n");
    printf("[3] Parcelado em 2 vezes: Preço normal\n");
    printf("[4] Parcelado em 3 vezes ou mais: 10 por cento de acréscimo\n");
    printf("[5] Anular operação\n");
    printf("-----------------------------------------------------------\n");

    opcao = get_int("Escolha um número: ");
    system("clear");

    if (opcao == 1)
    {
        novo_preco = preco - ((preco/100)*15);
        printf("Valor total da compra: %.2f€\n",novo_preco);
    }
    else if (opcao == 2)
    {
        novo_preco = preco - ((preco/100)*10);
        printf("Valor total da compra: %.2f€\n",novo_preco);
    }
    else if (opcao == 3)
    {
        qtd_parcelas = 2;
        parcelas = preco/qtd_parcelas;
        printf("Valor total da compra: %.2f€\n",preco);
        printf("Dividido em %i parcelas de %.2f€\n",qtd_parcelas,parcelas);
    }
    else if(opcao == 4)
    {
        qtd_parcelas = get_int("Em quantas parcelas gostaria de fazer?: ");
        novo_preco = preco + ((preco/100)*10);
        parcelas = novo_preco/qtd_parcelas;
        printf("Valor total da compra: %.2f€\n",novo_preco);
        printf("Dividido em %i parcelas de %.2f€\n",qtd_parcelas,parcelas);
    }
    else
    {
        printf("Operação Anulada!\n");
    }

    return 0;
}
