#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int qtd_horas = 0;
    int pontos = 0;
    float dinheiro = 0;

    qtd_horas = get_int("Horas: ");

    pontos = qtd_horas * 3;

    if(qtd_horas <= 10)
    {
        pontos = pontos + qtd_horas * 2;
    }
    else if(qtd_horas > 10 && qtd_horas <= 20)
    {
        pontos = pontos + qtd_horas * 5;
    }
    else
    {
        pontos = pontos + qtd_horas * 10;
    }

    dinheiro = pontos * 0.05;
    printf("Total de Pontos %i\n", pontos);
    printf("Prêmio de %.2f €\n", dinheiro);
}
