#include<stdio.h>

int main(void)
{
    int velocidade = 0;
    printf("Velocidade: ");
    scanf("%i", &velocidade);

    if(velocidade > 80)
    {
        int kms_acima = velocidade - 80;
        int valor_multa = kms_acima * 5;
        printf("Multa: %i €\n", valor_multa);
    }
    else
    {
        printf("Ok!");
    }
}
