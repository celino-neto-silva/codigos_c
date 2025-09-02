//Crie um programa que leia sexo e peso de 8 pessoas, usando a estrutura
//“para”. No final, mostre na tela:
//a) Quantas mulheres foram cadastradas
//b) Quantos homens pesam mais de 100Kg
//c) A média de peso entre as mulheres
//d) O maior peso entre os homens

#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int qtd_m = 0;
    int mais_100_h = 0;
    float media_peso_m = 0;
    float soma_media_m = 0;
    float maior_peso = 0;

    char sexo;
    float peso = 0;

    for(int c = 0; c < 8; c++)
    {
        sexo = get_char("Sexo [M / F]?: ");
        peso = get_float("Peso (Kg): ");

        if(sexo == 'M')
        {
            if(c == 0)
            {
                maior_peso = peso;
            }

            if(peso > 100)
            {
                mais_100_h = mais_100_h + 1;
            }

            if(peso > maior_peso)
            {
                maior_peso = peso;
            }
        }
        else
        {
            qtd_m = qtd_m + 1;
            soma_media_m = soma_media_m + peso;
        }
    }
    media_peso_m = soma_media_m / qtd_m;
    printf("1º - Mulheres cadastradas: %i\n", qtd_m);
    printf("2º - Peso médio das mulheres: %.2f\n",media_peso_m);
    printf("3º - Homens que pesam mais de 100Kg: %i\n",mais_100_h);
    printf("4º - Maior peso entre os homens: %f\n", maior_peso);
}
