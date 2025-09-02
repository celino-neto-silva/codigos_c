#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int taman = 8;
    int idades[taman];
    int idade = 0;
    int soma = 0;
    int maior = 0;
    int pos_maior = 0;
    float media = 0;

    for(int c = 0; c < taman; c++)
    {
        idade = get_int("%iª Idade: ",c+1);
        idades[c] = idade;

        if(c == 0)
        {
            maior = idade;
        }

        if(idade > maior)
        {
            maior = idade;
            pos_maior = c;
        }

        soma = soma + idade;
    }

    media = soma / taman;
    printf("Média das idades: %.2f\n", media);

    printf("A maior idade: %i\n", maior);
    printf("Posição da maior idade: %i\n", pos_maior);

    for(int c = 0; c < taman; c++)
    {
        if(idades[c] > 25)
        {
            printf("Na posição %i temos uma idade maior que 25 anos, idade: %i\n",c,idades[c]);
        }
    }
}
