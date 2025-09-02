#include<stdio.h>
#include<cs50.h>
#include<math.h>

int potencia(int base, int expo);

int main(void)
{
    int base = get_int("Base: ");
    int expo = get_int("Expoente: ");

    int pot = potencia(base, expo);

    printf("Potência de %i elevado a %i é igual a: %i\n", base, expo, pot);
}

int potencia(int base, int expo)
{
    int p = 0;

    p = pow(base, expo);

    return p;
}
