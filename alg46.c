#include<stdio.h>

int kms = 0;
float passagem = 0;

int main(void)
{
    printf("Kms: ");
    scanf("%i", &kms);

    if(kms < 200)
    {
        passagem = kms * 0.45;
    }
    else
    {
        passagem = kms * 0.50;
    }

    printf("Para %i (km), o valor da passagem: %.2f €\n", kms, passagem);
}
