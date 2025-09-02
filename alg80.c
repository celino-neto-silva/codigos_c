#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int idade = 0;
    float soma, qtd, media = 0;

    for(;;)
    {
        printf("P/a interromper digite 999\n");
        idade = get_float("Idade: ");
        if(idade == 999)
        {
            break;
        }
        else
        {
            soma = soma + idade;
        }
        qtd = qtd + 1;
    }

    media = soma / qtd;

    printf("Média: %.2f\n", media);
    printf("Qtd. de Alunos: %.2f\n", qtd);
}
