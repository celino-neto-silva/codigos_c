#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float num1 = 0;
    float num2 = 0;

    printf("Nº1: ");
    scanf("%f", &num1);

    printf("Nº2: ");
    scanf("%f", &num2);

    float soma = num1 + num2;

    printf("A soma entre %f e %f igual a: %f \n",num1,num2,soma);
}
