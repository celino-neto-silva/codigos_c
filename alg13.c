#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>

int main(void)
{
    string nome = get_string("Nome: ");
    int idade = get_int("Idade: ");

    if(idade >= 18)
    {
        printf("Você é maior de idade!\n");
    }
    else
    {
        printf("Você é menor de idade\n");
    }
}

