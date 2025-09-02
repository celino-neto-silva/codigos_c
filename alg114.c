#include<stdio.h>
#include<cs50.h>

void par_impar(int n);

int main(void)
{
    int n = get_int("Nº: ");
    par_impar(n);
}

void par_impar(int n)
{
    if(n % 2 == 0)
    {
        printf("%i é Par\n",n);
    }
    else
    {
        printf("%i é Ímpar\n",n);
    }
}
