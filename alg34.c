#include<cs50.h>
#include<stdio.h>

int main(void)
{
    float base = get_float("Base (m): ");
    float altura = get_float("Altura (m): ");

    float area = base * altura;

    float litros = area/2;

    printf("Área igual a: %.1f m2\n", area);
    printf("Litros igual a: %.1f L\n", litros);
}
