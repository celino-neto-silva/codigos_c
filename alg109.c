#include<stdio.h>
#include<cs50.h>

void saudacao(string msg);

int main(void)
{
    string msg = get_string("Mensagem: ");
    saudacao(msg);
}

void saudacao(string msg)
{
    printf("---------------------\n");
    printf("%s\n",msg);
    printf("---------------------\n");
}
