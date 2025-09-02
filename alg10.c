#include<stdio.h>
#include<cs50.h>

int tamanho = 3;
float notas[3];
float soma = 0;
float media = 0;

int main(void)
{
    for(int c = 0; c < tamanho; c++)
    {
        notas[c] = get_float("Nota %i: ",c+1);
        soma = soma + notas[c];
    }
    media = soma/tamanho;
    printf("Sua média é %.1f\n",media);
}
