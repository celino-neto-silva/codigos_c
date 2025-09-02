#include<stdio.h>
#include<cs50.h>

int somador(int n1, int n2);

int main(void)
{
    int n1 = get_int("1º Nº: ");
    int n2 = get_int("2º Nº: ");

    int soma = somador(n1, n2);

    printf("A soma entre %i e %i é igual a: %i\n", n1,n2,soma);
}

int somador(int n1, int n2)
{
    int s = n1 + n2;

    return s;
}
