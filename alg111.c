#include<stdio.h>
#include<cs50.h>

void saudacao(string msg, int qtd, int borda);

int main(void)
{
    string msg = get_string("Mensagem: ");

    int qtd = get_int("Qtd: ");

    printf("[1] +-------=======------+\n");
    printf("[2] ~~~~~~~~:::::::~~~~~~~\n");
    printf("[3] <<<<<<<<------->>>>>>>\n");
    int borda = get_int("Tipo de borda: ");

    saudacao(msg, qtd, borda);
}

void saudacao(string msg, int qtd, int borda)
{
    string b1 = "+-------=======------+";
    string b2 = "~~~~~~~~:::::::~~~~~~~";
    string b3 = "<<<<<<<<------->>>>>>>";

    if(borda == 1)
    {
        printf("%s\n",b1);
        for(int c = 0; c < qtd; c++)
        {
            printf("%s\n",msg);
        }
        printf("%s\n",b1);
    }
    else if(borda == 2)
    {
        printf("%s\n",b2);
        for(int c = 0; c < qtd; c++)
        {
            printf("%s\n",msg);
        }
        printf("%s\n",b2);
    }
    else
    {
        printf("%s\n",b3);
        for(int c = 0; c < qtd; c++)
        {
            printf("%s\n",msg);
        }
        printf("%s\n",b3);
    }
}
