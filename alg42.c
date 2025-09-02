#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int ano_nasc = get_int("Ano de Nascimento: ");
    int ano_atual = get_int("Ano Atual: ");

    int idade = ano_atual - ano_nasc;

    printf("Idade %i anos\n",idade);
    if(idade >= 18)
    {
        printf("Pode Votar\n");
    }
    else
    {
        printf("Não Pode Votar\n");
    }
}
