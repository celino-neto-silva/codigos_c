#include<stdio.h>

int main(void)
{
    float preco_euro = 5.5;
    float reais = 0;

    printf("Informe quantidade em R$: ");
    scanf("%f", &reais);

    float euros = reais/preco_euro;

    printf("Com R$%.2f você pode comprar %.2f€\n", reais, euros);
}
