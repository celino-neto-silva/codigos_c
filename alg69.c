#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int soma = 0;
    int n = 0;

    for(int c = 0; c < 7; c++)
    {
        n = get_int("Nº: ");
        soma = soma + n;
    }

    printf("Somatório: %i\n", soma);
}
