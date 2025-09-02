#include<stdio.h>

int main(void)
{
    float preco_produto = 0;

    printf("Informe o valor do produto: ");
    scanf("%f", &preco_produto);

    float preco_ajustado = ((preco_produto/100) * 5) - preco_produto;

    printf("Preço Final = %.2f€\n", preco_ajustado);
}
