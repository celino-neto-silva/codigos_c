#include<stdio.h>
#include<cs50.h>

int main(void)
{
    float salario = get_float("Salário: ");
    float salario_ajuste = ((salario/100) * 15) + salario;

    printf("Salário ajustado: %.2f €", salario_ajuste);
}
