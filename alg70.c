#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n,pares,impares = 0;

    for(int c = 0; c < 6; c++)
    {
        n = get_int("Nº: ");
        if(n % 2 == 0)
        {
            pares = pares  + 1;
        }
        else
        {
            impares = impares + 1;
        }
    }

    printf("Quant. de Pares: %i\n", pares);
    printf("Quant. de Ímpares: %i\n", impares);
}
