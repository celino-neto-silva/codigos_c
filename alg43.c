#include<stdio.h>

int ano = 0;

int main(void)
{
    printf("Informe o ano: ");
    scanf("%i", &ano);

    if(ano % 100 == 0)
    {
        if(ano % 400 == 0)
        {
            printf("Ano %i é bissexto\n", ano);
        }
        else
        {
            printf("Ano %i não é bissexto\n", ano);
        }
    }
    else
    {
        if(ano % 4 == 0)
        {
            printf("Ano %i é bissexto\n", ano);
        }
        else
        {
            printf("Ano %i não é bissexto\n", ano);
        }
    }
}
