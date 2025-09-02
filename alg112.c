#include<stdio.h>
#include<cs50.h>

int somador(int n1, int n2);

int main(void)
{
    int n1 = get_int("Nº1: ");
    int n2 = get_int("Nº2: ");

    int soma = somador(n1, n2);
    printf("Soma: %i\n",soma);
}

int somador(int n1, int n2)
{
    int s = n1 + n2;

    return s;
}
