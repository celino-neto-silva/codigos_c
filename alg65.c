#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int inicio = get_int("Inicio: ");
    int fim = get_int("Fim: ");
    int passo = get_int("Passo: ");

    for(int c = inicio; c <= fim; c = c + passo)
    {
        printf("%i\n", c);
    }
}
