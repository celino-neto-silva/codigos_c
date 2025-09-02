#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>

int main(void)
{
    int qtd = 5;

    string nomes[qtd];
    char sexo[qtd];
    float salarios[qtd];

    for(int c = 0; c < qtd; c++)
    {
        system("clear");
        nomes[c] = get_string("Seu nome: ");
        sexo[c] = get_char("Sexo [M / F]: ");
        salarios[c] = get_float("Salário (€): ");
    }

    system("clear");

    printf("-----------------------------------------------------\n");
    printf("\n");

    for(int c = 0; c < qtd; c++)
    {
        if(sexo[c] == 'F' && salarios[c] > 5000)
        {
            printf("Nome: %s\n",nomes[c]);
            printf("Sexo: %c\n",sexo[c]);
            printf("Salário (€): %2.f\n",salarios[c]);
            printf("-----------------------------------------------------\n");
            printf("\n");
        }
    }
}
