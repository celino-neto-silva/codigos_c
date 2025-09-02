#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

int tamanho = 4;
float notas[4];
float soma = 0;
float media = 0;
string name;
string status;

int main(void)
{
    name = get_string("Nome do aluno: ");
    for(int c = 0; c < tamanho; c++)
    {
        system("clear");
        notas[c] = get_float("Nota %i: ",c+1);
        soma = soma + notas[c];
    }
    system("clear");

    media = soma/tamanho;

    if(media >= 7)
    {
        status = "APROVADO";
    }
    else
    {
        status = "REPROVADO";
    }

    printf("Aluno: %s\n",name);
    printf("Média: %.2f\n",media);
    printf("Status: %s\n",status);
}
