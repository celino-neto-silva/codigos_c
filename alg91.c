#include<stdio.h>
#include<stdlib.h>

float termo_1 = 0;
float razao = 0;

float pa = 0;
float soma = 0;

int main (void)
{
    printf("1º Termo: ");
    scanf("%f",&termo_1);

    printf("Razão: ");
    scanf("%f", &razao);

    if(razao <= 0)
    {
        do
        {
            printf("Razão (Maior que 0): ");
            scanf("%f", &razao);
        }
        while(razao <= 0);
    }

    pa = termo_1;

    for(int c = 0; c < 10; c++)
    {
        soma = soma + pa;
        printf("%iº Termo: %.1f\n", c+1, pa);
        pa = pa + razao;
    }

    printf("Somatório: %.1f\n", soma);
}
