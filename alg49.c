#include<stdio.h>
#include<cs50.h>

float n1, n2, media = 0;
int main(void)
{
    n1 = get_float("Nota 1: ");
    n2 = get_float("Nota 2: ");

    media = (n1 + n2)/2;
    printf("%.1f\n", media);

    if(media >= 7)
    {
        printf("Aprovado!\n");
    }
    else if(media >= 5 && media < 7)
    {
        printf("Recuperação!\n");
    }
    else
    {
        printf("Reprovado!\n");
    }
}
