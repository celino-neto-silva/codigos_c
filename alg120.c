#include<stdio.h>
#include<cs50.h>

int somador(int n_inicio, int n_fim);

int main(void)
{
    int n_inicio = get_int("Nº do inicio: ");
    int n_fim = get_int("Nº do fim: ");

    int soma = somador(n_inicio, n_fim);

    printf("Soma geral: %i\n", soma);
}

int somador(int n_inicio, int n_fim)
{
    int s = 0;

    for(int c = n_inicio; c <= n_fim; c++)
    {
        s = s + c;
    }

    return s;
}
