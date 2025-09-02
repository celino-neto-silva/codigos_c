#include<stdio.h>
#include<cs50.h>

int main(void)
{
    string nome;
    float salario = 0;

    nome = get_string("Qual o seu nome?: ");
    salario = get_float("Qual o seu salario (€)?: ");

    printf("Nome: %s\n",nome);
    printf("Salário: %2.f €\n",salario);
}
