#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int taman = 10;
    int acima_media = 0;

    float notas[taman];
    float nota = 0;
    float maior = 0;
    float soma = 0;
    float media = 0;

    for(int c = 0; c < taman; c++)
    {
        nota = get_int("Nota: ");
        notas[c] = nota;

        if(c == 0)
        {
            maior = nota;
        }

        if(nota > maior)
        {
            maior = nota;
        }

        soma = soma + nota;
    }

    media = soma / taman;
    printf("Média geral: %.2f\n", media);

    printf("Maior nota inserida: %.2f\n", maior);

    for(int c = 0; c < taman; c++)
    {
        if(notas[c] > media)
        {
            acima_media = acima_media + 1;
        }
    }
    printf("Qtd. de alunos acima da média: %i\n", acima_media);

    for(int c = 0; c < taman; c++)
    {
        printf("Maior nota %f aparece na posição %i\n", maior, c);
    }
}
