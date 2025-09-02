#include<stdio.h>
#include<cs50.h>

int main(void)
{
    char resp = 'S';
    int pares, cont = 0;
    int valor, menor = 0;
    float soma = 0;
    float media = 0;

    do
    {
        cont = cont + 1;

        valor = get_int("Informe um nº: ");
        if(valor < menor)
        {
            menor = valor;
        }

        soma = soma + valor;

        if(valor % 2 == 0)
        {
            pares = pares + 1;
        }

        resp = get_char("Continuar? [S / N]:");
    }
    while(resp == 'S');

    media = soma / cont;

    printf("Total de números: %i\n", cont);
    printf("Soma dos números: %f\n", soma);
    printf("Média: %.2f\n", media);
    printf("Qtd. de Pares: %i\n", pares);
    printf("Menor valor: %i\n", menor);
}
