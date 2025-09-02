#include<stdio.h>
#include<cs50.h>

int main(void)
{
    float salario = get_float("Salario Atual: ");
    int anos_empresa = get_int("Anos de Empresa: ");
    char sexo = get_char("M/F?: ");

    float novo_salario = 0;
    float aumento = 0;


    if(sexo == 'M')
    {
        if(anos_empresa > 30)
        {
            aumento = ((salario/100)*12);
        }
        else if(anos_empresa >= 20 && anos_empresa <= 30)
        {
            aumento = ((salario/100)*23);
        }
        else
        {
            aumento = ((salario/100)*5);
        }
    }
    else
    {
        if(anos_empresa > 30)
        {
            aumento = ((salario/100)*12);
        }
        else if(anos_empresa >= 20 && anos_empresa <= 30)
        {
            aumento = ((salario/100)*23);
        }
        else
        {
            aumento = ((salario/100)*5);
        }
    }
    novo_salario = salario + aumento;
    printf("Novo Salário: %.2f\n", novo_salario);
}
