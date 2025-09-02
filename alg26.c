#include<stdio.h>
#include<cs50.h>

int main(void)
{
    string name;

    name = get_string("Olá! Qual o seu Nome?: ");
    printf("Seja Bem-Vindo(a) %s\n",name);
}
