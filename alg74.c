#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int idades[10];
    int maior, maior_18, menor_5, soma = 0;
    float media = 0;

    for(int i = 0; i < 10; i++)
    {
        idades[i] = get_int("Idade: ");
    }

    for(int i = 0; i < 10; i++)
    {
        soma = soma + idades[i];

        if(idades[i] > maior)
        {
            maior = idades[i];
        }

        if(idades[i] > 18)
        {
            maior_18 = maior_18 + 1;
        }

        if(idades[i] < 5)
        {
            menor_5 = menor_5 + 1;
        }
    }

    media = soma/10;

    printf("Média de Idade: %2.f\n", media);
    printf("Maior Idade: %i\n", maior);
    printf("Maiores de 18 anos: %i\n", maior_18);
    printf("Menores de 5 anos: %i\n", menor_5);
}
