#include<stdio.h>
#include<cs50.h>

int main(void)
{
    float maior, menor, preco = 0;

    preco = get_float("1º - Preço: ");
    maior = preco;
    menor = preco;

    for(int i = 1; i < 8; i++)
    {
        preco = get_float("%iº - Preço: ",i+1);
        if(preco > maior)
        {
            maior = preco;
        }

        if(preco < menor)
        {
            menor = preco;
        }
    }

    printf("O Maior: %.2f", maior);
    printf("O Menor: %.2f", menor);
}
