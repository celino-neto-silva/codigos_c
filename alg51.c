#include<stdio.h>
#include<cs50.h>

float salario = 0;
float novo_salario = 0;
int anos = 0;

int main(void)
{
    string nome = get_string("Nome: ");
    salario = get_float("Salário atual (€): ");
    anos = get_int("Anos na Empresa: ");

    if(anos <= 3)
    {
        novo_salario = ((salario/100)*3) + salario;
    }
    else if(anos > 3 && anos < 10)
    {
        novo_salario = ((salario/100)*12.5) + salario;
    }
    else
    {
        novo_salario = ((salario/100)*20) + salario;
    }

    printf("%s ---> Novo salário: %.2f€\n", nome, novo_salario);
}
