#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int idade,qtd_m, qtd_f, soma, soma_m, maior_20 = 0;
    float media, media_m = 0;
    char sexo = ' ';

    for(int i = 0; i < 5; i++)
    {
        sexo = get_char("Sexo [M / F]: ");
        idade = get_int("Idade: ");

        soma = soma + idade;
        if(sexo == 'M')
        {
            soma_m = soma_m + idade;
            qtd_m = qtd_m + 1;
        }
        else
        {
            if(idade > 20)
            {
                maior_20 = maior_20 + 1;
            }
            qtd_f = qtd_f + 1;
        }
    }

    media = soma / 5;
    printf("Média de idade do grupo: %f\n", media);
    printf("Quant. de Mulheres: %i\n", qtd_f);
    printf("Quant. de Homens: %i\n", qtd_m);
    media_m = soma_m / qtd_m;
    printf("Média de idade dos homens: %f\n", media_m);
    printf("Mulheres acima dos 20 anos: %i\n", maior_20);
}
