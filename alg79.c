#include<stdio.h>
#include<cs50.h>

int main(void)
{
    char sexo = ' ';
    char resp = 'S';
    float salario = 0;
    float total_m, total_f = 0;

    do
    {
        sexo = get_char("Sexo [M / F]?: ");
        salario = get_float("Salário (€): ");

        if(sexo == 'M')
        {
            total_m = total_m + salario;
        }
        else
        {
            total_f = total_f + salario;
        }

        resp = get_char("Continuar [S / N]?: ");
    }
    while(resp == 'S');

    printf("Soma Total de Salários dos Homens: %.2f\n", total_m);
    printf("Soma Total de Salários das Mulheres: %.2f\n", total_f);
}
