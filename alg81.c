#include<stdio.h>
#include<cs50.h>

int main(void)
{
    char continuar;
    char sexo;
    float idade,mulher_jovem,media,soma = 0;
    int qtd_homens,maior = 0;
    int cont = 0;
    
    while(true)
    {
        cont = cont + 1;

        sexo = get_char("Sexo [M / F]?: ");
        idade = get_int("Idade: ");

        if(cont == 1)
        {
            maior = idade;
            mulher_jovem = idade;
        }

        if(sexo == 'M')
        {
            qtd_homens = qtd_homens + 1;
            soma = soma + idade;
        }

        if(idade > maior)
        {
            maior = idade;
        }

        if(sexo == 'F' && idade < mulher_jovem)
        {
            mulher_jovem = idade;
        }

        continuar = get_char("Continuar? [S / N]: ");
        if(continuar == 'N')
        {
            break;
        }
    }

    media = soma / qtd_homens;
    printf("Total de Homens cadastrados %i\n", qtd_homens);
    printf("Media de Idade dos Homens cadastrados %.2f\n", media);
    printf("Idade da mulher mais jovem %f\n", mulher_jovem);
    printf("Maior idade %i", maior);
}
