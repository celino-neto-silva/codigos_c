#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int size = 5;

    string nomes[size];
    float salario[size];
    float novo_salario[size];


    for(int i = 0; i < size; i++)
    {
        nomes[i] = get_string("Nome: ");
        salario[i] = get_float("Salário (€): ");
        novo_salario[i] = salario[i] * 1.25;
    }

    for(int i = 0; i < size; i++)
    {
        printf("->%s e seu novo salário: %.2f\n", nomes[i], novo_salario[i]);
    }
}
