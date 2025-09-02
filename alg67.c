#include<stdio.h>

int main(void)
{
    int soma = 0;
    for(int c = 6; c <= 100; c = c + 2)
    {
        soma = soma + c;
    }

    printf("Resultado: %i\n", soma);
}
