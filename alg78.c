#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n,soma = 0;

    do
    {
        printf("Para Interromper digite 1111\n");
        n = get_int("Nº: ");

        if(n != 1111)
        {
            soma = soma + n;
        }
    }
    while(n != 1111);

    printf("A soma é: %i\n", soma);
}
