#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>

int main(void)
{
    int a = get_float("Nº1: ");
    int b = get_float("Nº2: ");

    int resto = a % b;
    int quociente = a / b;

    printf("Quociente: %i\n",quociente);
    printf("Resto: %i\n",resto);
}
