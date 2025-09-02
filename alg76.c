#include<stdio.h>
#include<cs50.h>

int main(void)
{
    float media, soma, altura, peso = 0;
    int mais_90, menos_50, mais_100 = 0;

    for(int i = 0; i < 7; i++)
    {
        altura = get_float("Altura (m): ");
        peso = get_float("Peso (Kg): ");

        soma = soma + altura;

        if(peso > 90)
        {
            mais_90 = mais_90 + 1;
        }

        if(peso < 50 && altura < 1.60)
        {
            menos_50 = menos_50 + 1;
        }

        if(altura > 1.90 && peso > 100)
        {
            mais_100 = mais_100 + 1;
        }
    }

    media = soma / 7;
    printf("Média de Altura: %.2f\n", media);
    printf("Qtd. com mais de 90Kg: %i\n", mais_90);
    printf("Qtd. com menos de 50Kg e menos que 1.60: %i\n", menos_50);
    printf("Qtd. com mais de 100Kg e mais de 1.90: %i\n", mais_100);
}
