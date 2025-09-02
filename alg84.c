#include<stdio.h>
#include<cs50.h>

int main(void)
{
    char resp = 'N';

    int idade = 0;
    int cont = 0;
    int mais_21 = 0;

    float soma = 0;
    float media = 0;

    do
    {
        cont = cont + 1;

        idade = get_int("Idade: ");
        soma = soma + idade;

        if(idade > 21)
        {
            mais_21 = mais_21 + 1;
        }

        resp = get_char("Continuar? [S / N]: ");
    }
    while(resp == 'S');

    media = soma / cont;
    printf("Qtd de pessoas: %i\n", cont);
    printf("Média de idades: %.2f\n", media);
    printf("Qtd de pessoas com mais de 21 anos: %i\n", mais_21);
}
