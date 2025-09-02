#include<stdio.h>
#include<cs50.h>

float media(float n1, float n2);

int main(void)
{
    float n1 = get_float("1ª Nota: ");
    float n2 = get_float("2ª Nota: ");

    float media_final = media(n1, n2);

    printf("Média geral: %.2f\n", media_final);
}

float media(float n1, float n2)
{
    float m = (n1 + n2)/2;

    return m;
}
