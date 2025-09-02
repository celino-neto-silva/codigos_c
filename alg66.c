#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int inicio = get_int("Inicio: ");
    int fim = get_int("Fim: ");
    int passo = get_int("Passo: ");

    if(inicio > fim)
    {
        for(int i = inicio; i >= fim; i = i - passo)
        {
            printf("%i\n", i);
        }
    }
    else
    {
        for(int i = inicio; i >= fim; i = i + passo)
        {
            printf("%i\n", i);
        }
    }
}
