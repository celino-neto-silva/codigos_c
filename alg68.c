#include<stdio.h>

int main(void)
{
    int soma = 0;

    for(int c = 0; c <= 500; c = c +50)
    {
        soma = soma + c;
    }

    printf("Soma: %i\n", soma);
}
