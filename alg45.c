#include<stdio.h>

char sexo = ' ';
float preco = 0;
float novo_preco = 0;

int main(void)
{
    printf("Valor do produto €: "),
    scanf("%f", &preco);

    printf("Sexo [M/F]?: ");
    scanf("%c", &sexo);

    if(sexo == 'M')
    {
        novo_preco = preco - ((preco/100) * 5);
        printf("Valor Final para Homens %.2f €", novo_preco);
    }
    else if(sexo == 'F')
    {
        novo_preco = preco - ((preco/100) * 13);
        printf("Valor Final para Mulheres %.2f €", novo_preco);
    }
}
