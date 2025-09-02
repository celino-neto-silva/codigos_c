#include<stdio.h>
#include<cs50.h>

void maior(int n1, int n2);

int main(void)
{
    int n1,n2 = 0;

    n1 = get_int("Nº1: ");
    n2 = get_int("Nº2: ");

    maior(n1,n2);
}

void maior(int n1, int n2)
{
    if(n1 > n2)
    {
        printf("%i é maior que %i\n",n1,n2);
    }
    else if(n2 > n1)
    {
        printf("%i é maior que %i\n",n2,n1);
    }
    else
    {
        printf("IGUAIS\n");
    }
}
