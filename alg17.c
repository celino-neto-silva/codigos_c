#include<stdio.h>
#include<cs50.h>

int main(void)
{
    float fahr,celsius = 0;

    fahr = get_float("Temperatura em Fahr: ");

    celsius = (5 * ( fahr-32) / 9);

    printf("Temperatura em Fahrenheint %1.fgraus\n",fahr);
    printf("Temperatura em Celsius %1.fgraus\n",celsius);
}
