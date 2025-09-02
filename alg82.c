#include<stdio.h>
#include<cs50.h>

int main(void)
{
    string nome;
    string mais_jovem_m;
    string mais_velho;

    char s_n;
    char sexo;
    float soma, media = 0;
    int mais_30_h, menos_18_f = 0;
    int cont = 0;
    int menor_m, maior_p;
    int idade = 0;

    while(true);
    {
        cont = cont + 1;

        nome = get_string("Nome: ");
        idade = get_int("Idade: ");
        sexo = get_char("Sexo [M / F]?: ");

        if(cont == 1)
        {
            mais_velho = nome;
            mais_jovem_m = nome;

            menor_m = idade;
            maior_p = idade;
        }

        soma = soma + idade;

        if(sexo == 'M' && idade > 30)
        {
            mais_30_h = mais_30_h + 1;
        }

        if(sexo == 'F' && idade < 18)
        {
            menos_18_f = menos_18_f + 1;
        }

        if(sexo == 'F' && idade < menor_m)
        {
            mais_jovem_m = nome;
            menor_m = idade;
        }

        if(idade > maior_p)
        {
            maior_p = idade;
            mais_velho = nome;
        }

        s_n = get_char("Continuar [S / N]?: ");

        if(s_n=='N')
        {
            break;
        }
    }

    media = soma / cont;

    printf("Média de idade: %.2f\n", media);
    printf("Maior idade: %i\n", maior);
    printf("Nome da mulher mais jovem: %s e idade: %i\n", mais_jovem_m, menor_m);
    printf("Nome da pessoa mais velha: %s e idade: %i\n", maior_p, mais_velho);
    printf("Qtd de homens mais de 30: %i\n", mais_30_h);
    printf("Qtd de mulheres menos de 18: %i\n", menos_18_f);
}
