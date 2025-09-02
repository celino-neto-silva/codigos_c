#include<stdio.h>
#include<cs50.h>

void saudacao(string msg, int qtd);

int main(void)
{
    string msg = get_string("Mensagem: ");
    int qtd = get_int("Qtd: ");

    saudacao(msg, qtd);
}

void saudacao(string msg, int qtd)
{
    printf("-----------------\n");
    for(int c = 0; c < qtd; c++)
        printf("%s\n",msg);
    printf("-----------------\n");
}
